///**********************************************************************************
/// Description: Outputs Celsius table based on dynamic Fahrenheit temperature.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float celsius(float & f) {
  float part1 = (5.0/9.0), part2 = (f - 32.0);
  return (part1 * part2);
}

int main() {
  string lineBreak(25, '-');
  cout << "Fahrenheit \tCelsius" << endl;
  cout << lineBreak << endl;

  float i{1}, c{};
  do {
    c = celsius(i);
    cout << setprecision(1) << fixed;
    cout << setw(4) << i << "\t\t";
    cout << setw(5) << c << endl;
  } while(i++ < 20);

  return 0;
}
