///**********************************************************************************
/// Description: Calculates various rainfall statistics based on user inputed data.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int printResults(string const& type, int & sale) {
  c
}

int getSales(string const& type, int & answer) {
  string error("That is not a valid input. Please try again");

  while (true) {
    cout << "Jars sold last month of " << type << ": ";
    cin >> answer;
    if (answer == 0 || answer < 0) {
      cout >> error;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }
  return 0;
}

int main() {
  vector <string> sauces = {"mild", "medium", "sweet", "hot", "zesty"};
  vector <int> sales;

  for (int i{0}; i < sauces.size(); i++) {
    getSales(sauces[i], sales[i]);
  }

  for (int i{0}; i < sales.size(); i++) {
    printResults(sauces[i], sales[i]);
  }

  return 0;
}
