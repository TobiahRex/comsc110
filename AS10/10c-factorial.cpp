///**********************************************************************************
/// Description: Solving factorial iteratively & recursively.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 26, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
using namespace std;

void factorialIt(int &n) {
  vector<int> nums = getPrintArr();

  int solution{n};
  while(n--) {
    solution *= n;
  }
  return solution;
}

int main() {
  int n = 4;
  cout << "n == " << n << endl;
  cout << "iterative: ";
  int iterative = factorialIt(n);
  // cout << "recursive: ";
  // int recursive = factorialRe(n);

  return 0;
}
