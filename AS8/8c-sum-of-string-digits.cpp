///**********************************************************************************
/// Description: Asks user for a string of numbers. Program finds integer stats for the numbers.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 19, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

void getUserInput(string &nums);
int recast(string &str, int &sum, int &highest, int &lowest);
void printResults(int &sum, int &highest, int &lowest);

int main() {
  string nums_str;
  int sum{0}, highest{0}, lowest{numeric_limits<int>::max()};

  getUserInput(nums_str);
  recast(nums_str, sum, highest, lowest);
  printResults(sum, highest, lowest);

  return 0;
}

void getUserInput(string &nums) {
  string error("\nThat is not a valid entry.  Please try again.\n");
  string prompt("\nEnter a set of random integers WITHOUT spaces.\ne.g. 12345\n");
  cout << prompt;

  while(true) {
    cout << ": ";
    getline(cin, nums);

    regex detect_spaces("(\\s+)|([a-zA-Z])");
    if (regex_search(nums, detect_spaces) || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
    } else {
      break;
    }
  }
}
int recast(string &str, int &sum, int &highest, int &lowest) {
  for (auto s : str) {
    int n = s - '0';
    sum += n;
    if (n > highest) highest = n;
    if (n < lowest) lowest = n;
  }
  return sum;
}
void printResults(int &sum, int &highest, int &lowest) {
  cout << "The sum of the digits is " << sum << endl;
  cout << "The highest digit is " << highest << endl;
  cout << "The lowest digits is " << lowest << endl;
}
