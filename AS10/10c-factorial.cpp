///**********************************************************************************
/// Description: Solving factorial iteratively & recursively.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 26, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
#include <vector>
using namespace std;

double factorialIt(double &n) {
  double solution{n};
  while(--n > 0) {
    // cout << "\nn: " << n << endl;
    solution *= n;
  }

  return solution;
}

double factorialRe(double &solution, double n) {
  if (n == 1) return solution;
  solution *= --n;
  return factorialRe(solution, n);
}

int main() {
  double n{};
  double saved{};
  while(true) {
    string error("\tThat is not a valid number. Try again.");
    cout << "Enter a number between 2 & 12 to calculate its factorial: ";
    cin >> n;
    if (cin.bad() || cin.fail() || 2 > n || n > 12) {
      cout << error << endl;
      cin.clear();
    } else {
      break;
    }
  }
  saved = n;
  cout << "n == " << n << endl;
  cout << "iterative: ";
  int iterative = factorialIt(n);
  cout << iterative << endl;

  n = saved;
  cout << "recursive: ";
  int recursive = factorialRe(n, n);
  cout << recursive << endl;

  return 0;
}
