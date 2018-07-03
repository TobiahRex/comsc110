///**********************************************************************************
/// Description: Shows how far a vehicle travelled per hour of a trip.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 2, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream infile("random.txt");
  infile.open();

  if (!inFile) {
    cout << "Unable to open file." << endl;
    exit(1);
  }

  int number{};
  do {
    cout << "number: " << number;
  } while(infile >> number);

  return 0;
}
