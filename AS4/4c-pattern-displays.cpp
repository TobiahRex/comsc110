///**********************************************************************************
/// Description: Shows different patterns using a loop
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 2, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>

using namespace std;

int main() {
  int i{};
  string pattern("+");

  cout << "Pattern A" << endl;
  do {
    cout << pattern << endl;
    pattern += "+";
  } while(++i < 10);

  cout << "\nPattern B" << endl;
  do {
    cout << pattern.substr(0, i) << endl;
  } while(i-- > 0);

  return 0;
}
