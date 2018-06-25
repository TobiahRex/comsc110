///**********************************************************************************
/// Description: A program that will determine the amount of memory used by data types: char, int, long & float.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 24, 2018
/// Status : Complete
///***********************************************************************************

#include <iostream>
using namespace std;

int main() {
  int i = 1;
  long l = 2;
  float f = 2.2;
  char c = 'c';

  cout << "char: " << sizeof(c) << endl;
  cout << "int: " << sizeof(i) << endl;
  cout << "float: " << sizeof(f) << endl;
  cout << "long: " << sizeof(l) << endl;


  return 0;
}
