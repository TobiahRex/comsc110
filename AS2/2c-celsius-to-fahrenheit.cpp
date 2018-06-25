///**********************************************************************************
/// Description: Calculates fahrenheit temperature from user input of Celsius temperature.
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
    float f, c;

    cout << "Enter the temperature in Celsius: " << endl;
    cin >> c;

    f = ((float) 9/ (float) 5) * c + (float) 32;

    cout << setprecision(2) << fixed;
    cout << f << " degrees Fahrenheit." << endl;

  return 0;
}
