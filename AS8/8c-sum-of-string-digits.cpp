///**********************************************************************************
/// Description: Asks user for two words and prints various stats about the words.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 19, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <regex>
using namespace std;

void getUserInput(string &w1, string &w2);

int main() {

  return 0;
}

void getUserInput(string &w1, string &w2) {
  string error("\nThat is not a valid entry.  Please try again.\n");
  string prompt("\nEnter a set of random integers WITHOUT spaces.\ne.g. 12345\n");
  cout << prompt;

  while(true) {
    cin >> w1;

    regex detectNums("\s+");
    if (regex_match(w1, detectNums) || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }
}
