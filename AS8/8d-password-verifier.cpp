///**********************************************************************************
/// Description: Program asks user for various password requirements.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 19, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

void getUserInput() {
  string password;
  string error("\nThat is not a valid entry.  Please try again.\n");
  string prompt("\nEnter a password using Uppercase, Lowercase and Numbers,\n and at least 6 characters long.\ne.g. Password1234\n");
  regex uppercase("[A-Z]+");
  regex lowercase("[a-z]+");
  regex numbers("[0-9]+");
  regex length("{6, 0}");

  cout << prompt;

  while(true) {
    cout << ": ";
    getline(cin, password);

    if (cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
    } else if (!regex_search(password, uppercase)) {
      cerr << "\nPassword must have at least 1 upper-case letter." << endl;
      cin.clear();
    } else if (!regex_search(password, lowercase)) {
      cerr << "\nPassword must have at least 1 lower-case letter." << endl;
      cin.clear();
    } else if (!regex_search(password, numbers)) {
      cerr << "\nPassword must have at least 1 number." << endl;
      cin.clear();
    } else if (!regex_search(password, length)) {
      cerr << "\nPassword must have at least 6 total characters & letters combined." << endl;
      cin.clear();
    } else {
      cout << "Your password is valid.";
      break;
    }
  }
}

int main() {
  getUserInput();
  return 0;
}
