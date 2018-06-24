///**********************************************************************************
/// Description: This program calculates the Sum & Average of a given set of Integers.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 24, 2018
/// Status : Complete
///***********************************************************************************

#include <iostream>
using namespace std;

int main() {
  int one = 28;
  int two = 32;
  int three = 37;
  int four = 24;
  int five = 33;

  float sum = one + two + three + four + five;
  float avg = sum / 5;

  cout << "Sum: " << sum << endl;
  cout << "Average: " << avg << endl;
}
