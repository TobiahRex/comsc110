///**********************************************************************************
/// Description: Tracks food consumption of 3 monkeys.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int calcStats(vector< vector<float> >) {

}

void getFood(
  int & i,
  int & j,
  vector< vector<int> > &foodChart,
) {
  string error("\nThat is not a valid input.\n");
  string nonNeg("\nEnter a non-negative number.\n");
  float food{};

  while(true) {
    cout << "Enter the pounds eaten by monkey number " << (i + 1) << " on day" << (j + 1) << ": ";
    cin >> food;
    if (food == 0) {
      cout << error;
      cin.clear();
      cin.ignore();
    } else if (food < 0) {
      cout << nonNeg;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }
  foodChart[i][j] = food;
}

int main() {
  int rows{3}, cols{7};
  vector<vector<float>> foodChart(rows, vector<float>(cols, 0));

  for (int i{0}; i < rows; i++) {
    for (int j{0}; j < cols; j++) getFood(i, j, foodChart);
  }

  calcStats(foodChart);
  printResults(foodChart);

  return 0;
}
