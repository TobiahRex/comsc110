///**********************************************************************************
/// Description: Calculates total income from 3 different types of ticket sales.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 24, 2018
/// Status : Complete
///***********************************************************************************

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double class_a, class_b, class_c, total;

  cout << "Enter the number of Class A tickets ($15.00) sold: " << endl;
  cin >> class_a;
  cout << "Enter the number of Class B tickets ($12.00) sold: " << endl;
  cin >> class_b;
  cout << "Enter the number of Class C tickets ($9.00) sold: " << endl;
  cin >> class_c;

  total = (class_a * 15) + (class_b * 12) + (class_c * 9);

  cout << setprecision(2) << fixed;
  cout << "Total income from tickets sales is: $" << total << endl;

  return 0;
}
