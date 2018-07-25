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

  cout << prompt;

  while(true) {
    cout << "\nEnter Password: ";
    getline(cin, password);

    if (cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
    } else if (
      regex_search(password, uppercase) &&
      regex_search(password, lowercase) &&
      regex_search(password, numbers) &&
      password.size() >= 6
    ) {
      cout << "\nYour password is valid." << endl;
      break;
    }

    if (regex_search(password, uppercase) == false) {
      cerr << "\nPassword must have at least 1 upper-case letter.";
    }

    if (regex_search(password, lowercase) == false) {
      cerr << "\nPassword must have at least 1 lower-case letter.";
    }

    if (regex_search(password, numbers) == false) {
      cerr << "\nPassword must have at least 1 number.";
    }

    if (password.size() < 6) {
      cerr << "\nPassword must have at least 6 total characters & letters combined.";
    }
    cin.clear();
  }
}

int main() {
  getUserInput();
  return 0;
}
