///**********************************************************************************
/// Description: File head program
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
  bool fileEnd{true};

  while(getline(infile, line)) {
    cout << line << endl;
    lineCount++;
    if (lineCount == 10) {
      if(getline(infile, line))
        fileEnd = false;
      break;
    }
  }
  if (lineCount < 10)
    cout << "\nThat is the end of the file." << endl;

  if (infile.is_open())
    infile.close();
}

int main() {
  string fileName;

  getFileName(fileName);
  readFile(fileName);


  return 0;
}
