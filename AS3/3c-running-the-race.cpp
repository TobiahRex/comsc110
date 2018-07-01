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
#include <algorithm>

using namespace std;

int main() {
  cout << "Enter the names of three runners and their finishing times." << endl
  << "I will tell you who came in first, second, and third." << endl;

  string first_name("");
  string second_name("");
  string third_name("");
  string number_error("\nInput must be a valid number, no letters.  Please try again.\n");
  string string_error("\nInput must only contain letters, no numbers.  Please try again.\n");
  regex detect_int("[0-9]+");

  int first_time{}, second_time{}, third_time{};


  for (int i = 0; i < 3; i++) {
    bool repeat{true};

    while (repeat) {
      cout << "\nName of Runner " << i + 1 << ": " << endl;
      string name("");
      cin >> name;

      if (regex_match(name, detect_int)) {
        cin.clear();
        cout << string_error;
      } else {
        repeat = false;

        switch(i) {
          case 0: first_name = name; break;
          case 1: second_name = name; break;
          case 2: third_name = name; break;
          default: break;
        }
      }
    }

    repeat = true;
    while (repeat) {
      cout << "Runner " << i + 1 << "'s finishing time: " << endl;

      float run_time{};
      cin >> run_time;

      if (cin.fail()) {
        cout << "FAIL";
        cin.clear();
        cout << number_error;
        cin.ignore();
      } else {
        repeat = false;

        switch(i) {
          case 0: first_time = run_time; break;
          case 1: second_time = run_time; break;
          case 2: third_time = run_time; break;
          default: break;
        }
      }
    } // end of while
  } // end of for-loop.
  int runners[3] = {first_time, second_time, third_time};

  cout << first_time << endl;
  cout << second_time << endl;
  cout << third_time << endl;

  cout << first_name << endl;
  cout << second_name << endl;
  cout << third_name << endl;

  return 0;
}
