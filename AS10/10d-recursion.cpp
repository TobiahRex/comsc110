///**********************************************************************************
/// Description: Using recursion.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 26, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


double fibonacci(vector<double> &answers, double n) {
  if (find(answers.begin(), answers.end(), n) != answers.end()) return answers[n];
  if (n == 0) {
    answers.push_back(1);
    return 0;
  };
  if (n == 1) {
    answers.push_back(1);
    return 1;
  };

  double answer = fibonacci(answers, n - 1) + fibonacci(answers, n - 2);
  answers[n] = answer;
  return answer;
}

int main() {
  while(true) {
    double n{};
    string error("\tThat is not a valid number. Try again.");
    cout << "Enter a number between 2 & 12 to calculate its factorial: ";
    cin >> n;
    if (cin.bad() || cin.fail()) {
      cout << error << endl;
      cin.clear();
    } else if (n < 0) {
      return -1;
    } else {
      vector<double> memo;
      double answer = fibonacci(memo, n); // 8
      cout << "Fibonacci(" << n << "): " << answer << endl;
    }
  }
  
  return 0;
}
