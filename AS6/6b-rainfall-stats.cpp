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

void askForRain(vector<float> & n, int & month) {
  string error("\nThat is not a valid input.  \nPlease enter a valid floating point number & try again\n");

  while(true) {
    int monthCount{};
    cout << "Enter the rainfall (in inches) for month #" << month  << ": ";
    float number{};
    cin >> number;

    if (number == 0 || number < 0) {
      cout << error << endl;
      cin.clear();
      cin.ignore();
    } else {
      n.push_back(number);
      break;
    }
  }

  return rain;
}

void beginProgram() {
  int month{0};
  vector <float> rain;
  while(month++ < 12) {
    askForRain(rain, month);
  }
}

int main() {


  return 0;
}
