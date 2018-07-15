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
void testThree();

int main() {
  string lineBreak(25, '=');

  // cout << lineBreak << endl;
  // testOne();
  // cout << lineBreak << endl;
  // testTwo();
  cout << lineBreak << endl;
  testThree();
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

  pointer = &secondValue;
  cout << "pointer: " << pointer << endl;

  *pointer = 20;
  cout << "secondValue: " << secondValue << " | pointer: " << pointer << endl;
}

void testThree() {
  int arr[5];
  int * ptr;

  ptr = arr; *ptr = 10;
  cout << "ptr: " << ptr << endl;
  cout << "*ptr: " << *ptr << endl;
  cout << "arr[0]: " << arr[0] << endl;

  ptr++; *ptr = 20;

  ptr = arr + 2; *ptr = 30;

  ptr = arr; *(ptr + 3) = 40;

  for (auto num : arr) cout << " " << num;
  cout << endl;
}
