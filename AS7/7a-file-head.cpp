///**********************************************************************************
/// Description: File head program
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fileName;

  while(true) {
    cout << "\nEnter file name: ";
    getline(cin, fileName);
    if (fileName == 0) {
      cout << "\nThat is not a valid file name. Please try again.\n";
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }

  return 0;
}
