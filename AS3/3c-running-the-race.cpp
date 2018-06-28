///**********************************************************************************
/// Description: This program asks for race results and displays the winner.  Also uses input validation.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 28, 2018
/// Status : Complete
///***********************************************************************************

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
  cout << "Enter the names of three runners and their finishing times." << endl
  << "I will tell you who came in first, second, and third." << endl;

  string second_name("");
  string third_name("");
  string number_error("\nInput must be a valid number, no letters.  Please try again.\n");
  string string_error("\nInput must be only contain letters.  Please try again.\n");
  regex detect_int("[0-9]+");


  for (let i = 0; i < 3; i++) {
    bool repeat{true};

    while (repeat) {
      cout << "\nName of Runner " << i + 1 << ": " << endl;
      string first_name("");
      cin >> first_name;

      if (regex_match(first_name, detect_int)) {
        cin.clear();
        cout << string_error;
      } else {
        repeat = false;
      }
    }

    repeat = true;
    while (repeat) {
      cout << "Runner " << i + 1 << "'s finishing time: " << endl;

      float first_time{};
      cin >> first_time;

      if (cin.fail()) {
        cout << "FAIL";
        cin.clear();
        cout << number_error;
        cin.ignore();
      } else {
        repeat = false;
      }
    }
  }

  return 0;
}
