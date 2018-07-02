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

  int first_time{}, second_time{}, third_time{};


  for (int i = 0; i < 3; i++) {
    bool repeat{true};

    while (repeat) {
      cout << "\nName of Runner " << i + 1 << ": " << endl;
      string name("");
      cin >> name;

      regex detect_int("[0-9]+");

      if (regex_match(name, detect_int)) {
        cout << string_error;
        cin.clear();
        cin.ignore();
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
      double run_time{};
      cin >> run_time;

      if (run_time == 0) {
        cout << number_error;
        cin.clear();
        cin.ignore(2);
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
  vector<int> runners = {first_time, second_time, third_time};
  sort(runners.begin(), runners.end());

  string answer_first("");
  string answer_second("");
  string answer_third("");

  first_time == runners[0] ? answer_first = first_name :
  first_time == runners[1] ? answer_first = second_name :
  answer_first = third_name;

  second_time == runners[0] ? answer_second = first_name :
  second_time == runners[1] ? answer_second = second_name :
  answer_second = third_name;

  third_time == runners[0] ? answer_third = first_name :
  third_time == runners[1] ? answer_third = second_name :
  answer_third = third_name;

  cout << endl;
  cout << answer_first << " came in 1st place." << endl;
  cout << answer_second << " came in 2nd place." << endl;
  cout << answer_third << " came in 3rd place." << endl;

  return 0;
}
