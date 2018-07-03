///**********************************************************************************
/// Description: Reads file and gives certain analytics from its content.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 2, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  cout << "Read random text file." << endl;

  ifstream inFile;
  inFile.open("/Users/BICKLEY/code/cs/comsc110/AS4/random.txt");

  if (!inFile) {
    cout << "Unable to open file." << endl;
    exit(1);
  }

  string line;
  float total_numbers{}, sum{};
  while(inFile >> line) {
    total_numbers += 1;
    sum += stoi(line);
  }

  cout << setprecision(0) << fixed;
  cout << "Total numbers: " << total_numbers << endl;
  cout << "Sum of the numbers: " << sum << endl;

  cout << setprecision(3) << fixed;
  cout << "Average of the numbers: " << (sum / total_numbers) << endl;

  inFile.close();

  return 0;
}
