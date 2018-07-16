///**********************************************************************************
/// Description: Display the tail end of a text file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

void getFileName(string &f);
void readFile(string &f);
vector<string> splice(vector<string> &arr, int start, int stop);

int main() {
  string fileName;
  getFileName(fileName);
  return 0;
}

vector<string> splice(vector<string> &arr, int start, int stop) {
  vector<string>::const_iterator right = arr.begin() + stop;
  vector<string>::const_iterator left;

  switch(start) {
    case 0: left = arr.begin(); break;
    default: left = arr.begin() + start;
  }

  vector<string> newArr(left, right);
  return newArr;
}

void getFileName(string &f) {
  while(true) {
    cout << "\nEnter file name: ";
    cin >> f;

    regex detectNums("[0-9]+");
    if (regex_match(f, detectNums) || cin.bad() || cin.fail()) {
      cerr << "\nThat is not a valid file name. Please try again.\n";
      cin.clear();
      cin.ignore();
    } else break;
  }
}

void readFile(string &f) {
  ifstream infile("/Users/BICKLEY/code/cs/comsc110/AS7/" + fileName);
  vector<string> lines;
  string line, eofile("That is the whole file.");
  int lineCount{};

  while(getline(infile, line)) {
    linesCount++;
    lines.push_back(line);

    if(infile.eof()) {
      vector<string> last10 = splice(lines, (lines.size() - 10), lines.end());
      for (auto line : lines) cout << line << endl;
      if (linesCount < 10) cout << endl << eofile << endl;
      break;
    }
  }
}
