///**********************************************************************************
/// Description: Searches for a string inside a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <strings>
using namespace std;

void getUserInput(string &f, string &s) {
  string error("\nThat is not a valid entry.  Please try again.\n");
  while(true) {
    cout << "\nEnter first word: ";
    cin >> f;

    regex detectNums("[0-9]+");
    if (regex_match(f, detectNums) || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
      cin.ignore();
    } else {
      cout << "\nEnter second word: ";
      cin >> s;

      if (cin.bad() || cin.fail()) {
        cerr << error;
        cin.clear();
        cin.ignore();
      } else {
        break;
      }
    }
  }
}

int main() {


  return 0;
}
