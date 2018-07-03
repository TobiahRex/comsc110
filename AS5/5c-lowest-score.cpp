///**********************************************************************************
/// Description: Calculates the falling distance of an object and displays the results.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
using namespace std;

void getScore(int & s) {
  cout << "Enter a test score: ";
  bool ask{true};
  while(ask) {
    cin >> s;
    if (s == 0) {
      cout << "That is not a valid score.  Please try again";
      cin.clear();
      cin.ignore();
    } else ask = false;
  }
}

int main() {


  return 0;
}
