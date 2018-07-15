///**********************************************************************************
/// Description: Practicing pointer: "address-of" & "dereference operator"
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
using namespace std;

void testOne();
void testTwo();

int main() {
  string lineBreak(25, '=');

  cout << lineBreak << endl;
  testOne();
  cout << lineBreak << endl;
  testTwo();
}

void testOne() {
  int myvar;

  int * foo = &myvar;
  cout << "foo: " << foo << endl; // hex address.

  int bar = *foo;
  cout << "bar: " << bar << endl; // 25
}

void testTwo() {
  int firstValue, secondValue;
  int * pointer;

  pointer = &firstValue;
  cout << "pointer: " << pointer << endl;

  *pointer = 10;
  cout << "firstValue: " << firstValue << endl;
}
