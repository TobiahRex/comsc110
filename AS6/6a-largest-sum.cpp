///**********************************************************************************
/// Description: Finds largest and smallest values from a list of user input numbers.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void printResult(int & num1, int & num2) {
  cout << "\n\nThe largest value entered is " << num1 << endl;
  cout << "\n\nThe smallest value entered is " << num2 << endl;  
}

void getBigSmall(vector<int> & v) {
  sort(v.begin(), v.end());
}

void askForNumber(vector<int> & v) {
  string error("That is not a valid input.  Please enter a positive interger & try again");
  while(true) {
    cout >> "Enter an interger value: ";
    int number{};
    cin >> number;

    if (number == 0 || number < 0) {
      cout << error;
      cin.clear();
      cin.ignore();
    } else {
      v.push_back(number);
      break;
    }
  }
}

int main() {
  string prompt("\nThis program will ask you to\n enter ten values, then it will\n determine the largest and smallest\n of the values you entered.\n");
  cout << prompt << endl;

  vector<int> numbers = {};
  while(numbers.length() < 10) askForNumber(numbers);

  getBigSmall(numbers);
  printResult(numbers[0], numbers[numbers.length() - 1]);

  return 0;
}
