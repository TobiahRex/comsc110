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

int factorialIt(int &n) {
  int solution{n};
  while(--n) solution *= n;
  return solution;
}

int factorialRe(int &solution, int n) {
  if (n == 1) return solution;
  solution *= --n;
  return factorialRe(solution, n);
}

int main() {
  int n;
  int saved;
  while(true) {
    string error("That is not a valid number. Try again.");
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    if (cin.bad() || cin.error()) {
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
