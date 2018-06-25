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
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int rand1, rand2, solution, r1Length, r2Length, solutionLength;
  srand(time(NULL));

  rand1 = rand() % 1000;
  rand2 = rand() % 1000;
  solution = rand1 + rand2;
  r1Length = to_string(rand1).length();
  r2Length = to_string(rand2).length();
  solutionLength = to_string(solution).length();
  string lineBreak(8, '_');

  printf ("%*d \n", 11 - r1Length, rand1);
  printf ("+%*d \n", 10 - r2Length, rand2);
  cout << lineBreak << endl;
  cout << '\n';
  cout << "(Press Enter To See Answer)" << endl;

  cin.ignore();

  printf ("%*d \n", 11 - r1Length, rand1);
  printf ("+%*d \n", 10 - r2Length, rand2);
  cout << lineBreak << endl;
  printf("%*d \n", 11 - solutionLength);


  return 0;
}
