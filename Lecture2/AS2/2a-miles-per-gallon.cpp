#include <iostream>
using namespace std;

int main() {
  float gas_tank, mileage, miles_per_gallon;

  cout << "Enter the size of the gas tank: " << endl;
  cin >> gas_tank;
  cout << "Enter the total mileage for a full tank of gas: " << endl;
  cin >> mileage;

  miles_per_gallon = mileage / gas_tank;

  cout << "If a car holds"
  << gas_tank << " gallons of gasoline and can travel "
  << mileage << " miles before refueling, then it will go about "
  << miles_per_gallon << " MPG."
  << endl;


  return 0;
}
