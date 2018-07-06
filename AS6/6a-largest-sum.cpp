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

void printResults(int & num1, int & num2) {
  cout << "\n\nThe largest value entered is " << num2 << endl;
  cout << "The smallest value entered is " << num1 << endl;
}

void getResults(vector<int> & v) {
  sort(v.begin(), v.end());
}

void askForNumber(vector<int> & v) {
  string error("That is not a valid input.  Please enter a positive interger & try again");
  while(true) {
    cout << "Enter an interger value: ";
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

vector<int> beginProgram() {
  string prompt("\nThis program will ask you to\nenter ten values, then it will\ndetermine the largest and smallest\nof the values you entered.\n");
  cout << prompt << endl;

  vector<int> numbers = {};
  while(numbers.size() < 10) askForNumber(numbers);
  return numbers;
}

int main() {
  vector<int> ints = beginProgram();
  getResults(ints);
  printResults(ints[0], ints[ints.size() - 1]);

  return 0;
}
