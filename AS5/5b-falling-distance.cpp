///**********************************************************************************
/// Description: Calculates the falling distance of an object and displays the results.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

double fallingDistance(int & t) {
  double d = (((0.5) * 9.8)* pow(t, 2));
  return d;
}

int main() {
  string lineBreak(25, '=');

  cout << "Seconds  \tDistance" << endl << lineBreak << endl;
  int i{};
  while(i++ < 10) {
    double result{};
    result = fallingDistance(i);
    cout << setprecision(2) << fixed;
    cout << setw(2) << i << "  \t" << setw(10) << result << " meters"<< endl;
  }

  return 0;
}
