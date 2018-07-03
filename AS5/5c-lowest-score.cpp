///**********************************************************************************
/// Description: Determines the average score by dropping the lowest of 5 total scores.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getScore(int & s) {

  bool ask{true};

  while(ask) {
    cout << "Enter a test score: ";
    cin >> s;
    if (s == 0) {
      cout << "That is not a valid score.  Please try again\n";
      cin.clear();
      cin.ignore();
    } else ask = false;
  }
}

int main() {
  vector<int> scores = {0, 0, 0, 0, 0};
  for (auto & score : scores) {
    getScore(score);
  }

  sort(scores.begin(), scores.end());
  int i{1};
  double average{};
  do {
    average += scores[i];
  } while(++i < 5);

  cout << "\nAfter dropping the lowest score the new average is: " << (average / 4) << endl;

  return 0;
}
