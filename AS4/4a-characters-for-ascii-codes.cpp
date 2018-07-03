///**********************************************************************************
/// Description: Uses a loop to display the chars for the ASCII codes 0 through 127.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 2, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
using namespace std;

int main() {
  cout << "Characters for the ASCII codes" << endl;
  int i = 0;
  do {
    cout << (char) i;
    if (i % 16 == 0) cout << '\n';
  } while(i++ < 127);

  return 0;
}
