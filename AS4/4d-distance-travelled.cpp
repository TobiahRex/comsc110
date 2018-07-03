///**********************************************************************************
/// Description: Shows how far a vehicle travelled per hour of a trip.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 2, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>

using namespace std;

int main() {
  string number_error("\nInput must be a valid number, no letters.  Please try again.\n");

  cout << "What is the speed of the vehicle in mph? ";

  bool input{true};
  int speed{};

  while (input) {
    cin >> speed;
    if (speed == 0) {
      cout << number_error << endl;
      cin.clear();
      cin.ignore();
    } else {
      input = false;
    }
  }

  cout << "For how many hours has it traveled? ";

  int hrs_travel{};
  input = true;
  while (input) {
    cin >> hrs_travel;
    if (hrs_travel == 0) {
      cout << number_error << endl;
      cin.clear();
      cin.ignore();
    } else {
      input = false;
    }
  }

  string results_title("\t Hour \tDistance \tTravelled (mi.)");
  string linebreak(12, "_");
  cout << results_title << endl << linebreak;

  do {
    cout << hrs_travel << endl;
  } while(--hrs_travel > 0);

  return 0;
}
