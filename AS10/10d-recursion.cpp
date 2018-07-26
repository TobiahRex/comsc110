///**********************************************************************************
/// Description: Using recursion.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 26, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
using namespace std;


double fibonacci(vector<int> &answers, int n) {
  if (answers[n]) return answers[n];
  if (n == 0) return 0;
  if (n == 1) return 1;

  double answer = fibonacci(answers, n - 1) + fibonacci(answers, n - 2);
  answers[n] = answer;
  return answer;
}

int main() {
  double n{};
  while(true) {
    string error("\tThat is not a valid number. Try again.");
    cout << "Enter a number between 2 & 12 to calculate its factorial: ";
    cin >> n;
    if (cin.bad() || cin.fail()) {
      cout << error << endl;
      cin.clear();
    } else {
      break;
    }
  }
  vector<double> memo;
  double answer = fibonacci(memo, n);
  cout << "Fibonacci(" << n << "): " << answer;

  return 0;
}
