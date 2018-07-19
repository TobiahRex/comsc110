///**********************************************************************************
/// Description: Asks user for two words and prints various stats about the words.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

void getUserInput(string &w1, string &w2) {
  string error("\nThat is not a valid entry.  Please try again.\n");

  while(true) {
    cout << "\nEnter first word: ";
    cin >> w1;

    regex detectNums("[0-9]+");
    if (regex_match(w1, detectNums) || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
      cin.ignore();
    } else {
      cout << "\nEnter second word: ";
      cin >> w2;

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
  string word1, word2;
  getUserInput(word1, word2);

  cout << word1 << endl << word2 << endl;


  return 0;
}
