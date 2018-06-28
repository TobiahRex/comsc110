///**********************************************************************************
/// Description: This program calcualtes the area of two squares and determines which is bigger.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 28, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>

using namespace std;

int main() {
  float rec_one_length{}, rec_two_length{}, rec_one_width{}, rec_two_width{}, area_one{}, area_two{};
  string result("");

  cout << "Enter the length of the 1st rectangle" << endl;
  cin >> rec_one_length;

  cout << "Enter the length of the 2nd rectangle" << endl;
  cin >> rec_two_length;

  cout << "Enter the width of the 1st rectangle" << endl;
  cin >> rec_one_width;

  cout << "Enter the width of the 2nd rectangle" << endl;
  cin >> rec_two_width;

  area_one = rec_one_length * rec_one_width;
  area_two = rec_two_length * rec_two_width;

  if (area_one > area_two) {
    result = "1st";
  } else if (area_two > area_one) {
    result = "2nd";
  }

  if (result.length()) {
    cout << "The " << result << " has the greater area" << endl;
  }
  else if (area_two == area_one) {
    cout << "Both triangles are equal." << endl;
  }

  return 0;
}
