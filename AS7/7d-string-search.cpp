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

void getUserInput(string &f, string &s);
void readFile(string &f, string &s);

int main() {
  string fileName, subString;
  struct detected_line {
    string line_str;
    int line_num;
  } found_line;
  vector<string> foundArr;

  getUserInput(fileName, subString);
  readFile(fileName, subString, foundArr, found_line);
  printResults(foundArr);

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

void readFile(string &f, string &s, struct dline) {
  ifstream infile("/Users/BICKLEY/code/cs/comsc110/AS7/" + f);
  vector<string> found;
  string line;
  int linesCount{}, occurenceCount{};

  while(true) {
    if(getline(infile, line)) {
      linesCount++;
      if (line.find(s)) {
        dline.line_str = line;
        dline.line_num = lineCount;
        found.push_back(dline);
      }
    } else {
      break;
    }
  }
}
