///**********************************************************************************
/// Description: Calculates a cars gas mileage.  User inputs size of tank & total mileage for the vehicle.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 24, 2018
/// Status : Complete
///***********************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float gas_tank, mileage, miles_per_gallon;

  cout << "Enter the size of the gas tank: " << endl;
  cin >> gas_tank;
  cout << "Enter the total mileage for a full tank of gas: " << endl;
  cin >> mileage;

  miles_per_gallon = mileage / gas_tank;

  cout << "If a car holds "
  << gas_tank << " gallons of gasoline \nand can travel "
  << mileage << " miles before refueling, \nthen it will go about "
  << setprecision(2) << fixed
  << miles_per_gallon << " MPG."
  << endl;


  return 0;
}
