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
#include <cstring>
#include <cctype>
#include <regex>
using namespace std;

void checkSame(string &w1, string &w2, string &answer) {
  int compare_result = strcmp(w1.c_str(), w2.c_str());
  if (compare_result == 0)
    answer = "The words are the same.";
  else
    answer = "The words are not the same.";
  cout << answer << endl;
}

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
      cout << "Enter second word: ";
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

void capitalizeWord(string &w) {
  string caps;
  for (auto s : w) {
    caps += toupper(s);
  }
  cout << "\t" << caps << endl;
}

void lowercaseWord(string &w) {
  string lower;
  for (auto s : w) {
    lower += tolower(s);
  }
  cout << "\t" << lower << endl;
}

void wordLength(string &w) {
  cout << "\t" << w.length() << endl;
}

void firstLastChar(string &w) {
  cout << "\t" << w[0] << endl;
  cout << "\t" << w[w.length() - 1] << endl;
}

void alphabetical(string &w1, string &w2) {
  int compare_result = strcmp(w1.c_str(), w2.c_str());
  if (compare_result == 0)
    answer = "\nThe words are the same.";
  else if (compare_result > 1)
    answer = "\nThe entered words in order: " + w1 + " " + w2;
  else
    answer = "\nThe entered words in order: " + w2 + " " + w1;
  cout << answer << endl;
}

void printResults(string &w1, string &w2, string &same) {
  checkSame(w1, w2, same);
  cout << "First Word:" << endl;
  capitalizeWord(w1);
  lowercaseWord(w1);
  wordLength(w1);
  firstLastChar(w1);

}

int main() {
  string word1, word2, sameCheck;
  getUserInput(word1, word2);
  printResults(word1, word2, sameCheck);

  return 0;
}
