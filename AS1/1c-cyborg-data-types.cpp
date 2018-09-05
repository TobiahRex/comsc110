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
  unsigned int i2 = 2;
  short s = 2;
  long l = 2;
  float f = 2.2;
  char c = 'c';
  double d = 12.68;

  cout << "int: " << sizeof(i) << endl;
  cout << "unsigned int: " << sizeof(i2) << endl;
  cout << "short: " << sizeof(s) << endl;
  cout << "long: " << sizeof(l) << endl;
  cout << "float: " << sizeof(f) << endl;
  cout << "char: " << sizeof(c) << endl;
  cout << "double: " << sizeof(d) << endl;

  cout << "&double: " << &d << endl;
  cout << "&float: " << &f << endl;
  cout << "&long: " << &l << endl;
  cout << "&short: " << &s << endl;
  cout << "&int: " << &i << endl;


  return 0;
}
