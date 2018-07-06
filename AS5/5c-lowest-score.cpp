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
#include <iomanip>
using namespace std;

vector<int> findLowest(vector<int> &v) {
  sort(v.begin(), v.end());
  vector<int> newScores(v.begin() + 1, v.end());
  return newScores;
}

void getScore(int & s) {

  bool ask{true};

  while(ask) {
    cout << "Enter a test score: ";
    cin >> s;
    if (s == 0 || 0 > s || s > 100) {
      cout << "That is not a valid score.  Please try again\n";
      cin.clear();
      cin.ignore();
    } else ask = false;
  }
}

void calcAverage(vector<int> &s) {
  s = findLowest(s);

  int i{0};
  double average{};
  do {
    average += s[i];
  } while(++i < 4);

  cout << setprecision(1) << fixed;
  cout << "\nAfter dropping the lowest score the new average is: " << (average / 4) << endl;
}

int main() {
  vector<int> scores = {0, 0, 0, 0, 0};
  for (auto & score : scores) {
    getScore(score);
  }

  calcAverage(scores);

  return 0;
}
