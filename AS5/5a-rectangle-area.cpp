///**********************************************************************************
/// Description: Uses 4 functions to ask user for rectangle dimensions and output area.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
using namespace std;

double getLength() {
  cout << "Enter the length: ";
  double length{};
  cin >> length;
  return length;
}

double getWidth() {
  cout << "Enter the width: ";
  double width{};
  cin >> width;
  return width;
}

double getArea(double & l, double & w) {
  return (l * w);
}

int displayData(double & l, double & w, double & a) {
  cout << "\nRectangle Data" << endl;
  cout << "---------------" << endl;
  cout << "Length:\t" << l << endl;
  cout << "Width:\t" << w << endl;
  cout << "Area:\t" << a << endl;

  return 0;
}

int main() {
  double area{}, length{}, width{};
  length = getLength();
  width = getWidth();
  area = getArea(length, width);
  displayData(length, width, area);

  return 0;
}
