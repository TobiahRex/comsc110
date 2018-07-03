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
  ifstream inFile;
  inFile.open("/Users/BICKLEY/code/cs/comsc110/AS4/random.txt");

  if (!inFile) {
    cout << "Unable to open file." << endl;
    exit(1);
  }

  string line;
  int total_numbers{}, sum{};
  float average{};

  while(inFile >> line) {
    total_numbers
  }

  inFile.close();

  return 0;
}
