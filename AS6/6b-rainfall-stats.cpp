///**********************************************************************************
/// Description: Calculates various rainfall statistics based on user inputed data.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void askForRain(vector<int> & v) {
  string error("That is not a valid input.  Please enter a positive interger & try again");

  int i{0};
  while(i++ < 12) {
    while(true) {
      int monthCount{};
      cout << "Enter the rainfall (in inches) for month: " <<
      int number{};
      cin >> number;

      if (number == 0 || number < 0) {
        cout << error << endl;
        cin.clear();
        cin.ignore();
      } else {
        v.push_back(number);
        break;
      }
    }
  }
}


int main() {


  return 0;
}
