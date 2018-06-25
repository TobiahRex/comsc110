///**********************************************************************************
/// Description: This program generates random math problems to help tutor students in addition.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 24, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int rand1, rand2, solution, r1Length, r2Length, solutionLength, wWidth;
  srand(time(NULL));

  rand1 = rand() % 1000;
  rand2 = rand() % 1000;
  solution = rand1 + rand2;
  wWidth = 11;
  r1Length = to_string(rand1).length();
  r2Length = to_string(rand2).length();
  solutionLength = to_string(solution).length();
  string lineBreak(8, '_');

  cout << setw(wWidth - r1Length) << rand1 << endl;
  cout << "+" << setw(wWidth - r1Length - 1) << rand2 << endl;
  cout << lineBreak << endl;
  cout << "\n(Press Enter To See Answer)\n" << endl;

  cin.ignore();

  cout << setw(wWidth - r1Length) << rand1 << endl;
  cout << "+" << setw(wWidth - r1Length - 1) << rand2 << endl;
  cout << lineBreak << endl;
  cout << setw(wWidth - solutionLength + (solutionLength > 3 ? 1 : 0)) << solution << endl;

  return 0;
}
