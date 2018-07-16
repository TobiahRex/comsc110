///**********************************************************************************
/// Description: Displays the entire contents of a file.
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

void getFileName();
void readFile();

int main() {
  string fileName;
  getFileName(fileName);
  readFile(fileName);
  return 0;
}

void getFileName(string &f) {
  while(true) {
    cout << "\nEnter file name: ";
    cin >> f;

    regex detectNums("[0-9]+");
    if (regex_match(f, detectNums)) {
      cerr << "\nThat is not a valid file name. Please try again.\n";
      cin.clear();
      cin.ignore();
    } else break;
  }
}

void readFile(string &fileName) {
  ifstream infile("/Users/BICKLEY/code/cs/comsc110/AS7/" + fileName);

  string line;
  int lineCount{};
  while(getline(infile, line)) {
    cout << line << endl;
    lineCount++;
    if (lineCount % 24 == 0) {
      if(getline(infile, line)) {
        cout << "...Press ENTER to continue..." << endl;
        cin.ignore(1);
      }
    }
  }

  if (infile.is_open())
    infile.close();
}
