///**********************************************************************************
/// Description: Searches for a string inside a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

struct detected_line {
  string line_str;
  int line_num;
} found_line;

void getUserInput(string &f, string &s);
void readFile(string &f, string &s, vector<detected_line> foundLines);

int main() {
  string fileName, subString;
  vector<detected_line> foundArr;

  getUserInput(fileName, subString);
  readFile(fileName, subString, foundArr);

  return 0;
}

void getUserInput(string &f, string &s) {
  while(true) {
    cout << "\nEnter file name: ";
    cin >> f;

    regex detectNums("[0-9]+");
    if (regex_match(f, detectNums) || cin.bad() || cin.fail()) {
      cerr << "\nThat is not a valid file name. Please try again.\n";
      cin.clear();
      cin.ignore();
    } else {
      cout << "\nEnter string to search for: ";
      cin >> s;

      if (cin.bad() || cin.fail()) {
        cerr << "\nThat is not a valid substring. Please try again.\n";
        cin.clear();
        cin.ignore();
      } else {
        break;
      }
    }
  }
}

void readFile(string &f, string &s, vector<detected_line> foundLines) {
  ifstream infile("/Users/BICKLEY/code/cs/comsc110/AS7/" + f);
  string line;
  int linesCount{};

  while(true) {
    if(getline(infile, line)) {
      linesCount++;
      size_t found = line.find(s);
      if (found != string::npos) {
        detected_line found_line;
        found_line.line_str = line;
        found_line.line_num = linesCount;
        foundLines.push_back(found_line);
      }
    } else {
      break;
    }
  }

  for (auto line_data : foundLines) {
    cout << line_data.line_num << ". " << line_data.line_str << endl;
  }
  cout << "\"" << s << "\"" << " was found " << foundLines.size() << " times." << endl;
}
