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

void checkSame(string &w1, string &w2) {
  string answer;
  int compare_result = strcmp(w1.c_str(), w2.c_str());
  if (compare_result == 0)
  answer = "\n" + w1 + " is the same as " + w2;
  else
    answer = "\n" + w1 + " is NOT the same as " + w2;
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
      cout << endl;

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
  cout << "\tUppercase: " << caps << endl;
}

void lowercaseWord(string &w) {
  string lower;
  for (auto s : w) {
    lower += tolower(s);
  }
  cout << "\tLowercase: " << lower << endl;
}

void wordLength(string &w) {
  cout << "\tTotal characters: " << w.length() << endl;
}

void firstLastChar(string &w) {
  cout << "\tFirst character: " << w[0] << endl;
  cout << "\tLast character: " << w[w.length() - 1] << endl;
}

void alphabetical(string &w1, string &w2) {
  string answer;
  int compare_result = strcmp(w1.c_str(), w2.c_str());
  if (compare_result == 0)
    answer = "" + w1 + " is NOT the same as " + w2;
  else if (compare_result < 0)
    answer = "Alphabetical order: " + w1 + " " + w2;
  else
    answer = "Alphabetical order: " + w2 + " " + w1;
  cout << answer << endl;
}

void printResults(string &w, string title) {
  cout << title << w << endl;
  wordLength(w);
  capitalizeWord(w);
  lowercaseWord(w);
  firstLastChar(w);
}

int main() {
  string word1, word2;
  getUserInput(word1, word2);
  printResults(word1, "1st word :");
  printResults(word2, "2nd word: ");
  checkSame(word1, word2);
  alphabetical(word1, word2);

  return 0;
}
