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
  cout << "Distance Travelled" << endl;
  string number_error("\nInput must be a valid number, no letters.  Please try again.\n");
  string mph("What is the speed of the vehicle in mph? ");
  string hours("For how many hours has it traveled? ");

  bool input{true};
  int speed{};

  while (input) {
    cout << mph;
    cin >> speed;
    if (speed == 0) {
      cout << number_error << endl;
      cin.clear();
      cin.ignore();
    } else {
      input = false;
    }
  }

  int hrs_travel{};
  input = true;
  while (input) {
    cout << hours;
    cin >> hrs_travel;
    if (hrs_travel == 0) {
      cout << number_error << endl;
      cin.clear();
      cin.ignore();
    } else {
      input = false;
    }
  }

  string results_title("\n\n\tHour \tDistance Travelled (mi.)");
  string linebreak(results_title.length() + 10, '_');
  cout << results_title << endl << linebreak << endl;

  int i{1};
  do {
    cout << "\t " << i << "\t " << (speed * i) << endl;
  } while(i++ < hrs_travel);

  return 0;
}
