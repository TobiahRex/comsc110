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

int getFood(
  int & i,
  int & j,
  vector<float> & foods,
) {
  string error("\nThat is not a valid input. Please try again.\n");
  float food{};

  while(true) {
    cout << "Enter the pounds eaten by monkey number " << (i + 1) << " on day" << (j + 1) << ": ";
    cin >> food;
    if (food == 0 || food < 0) {
      cout << error;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }

  vector<vector<int>> array_2d(rows, vector<int>(cols, 0));

}

int main() {
  int rows{3}, cols{5};
  vector<vector<int>> foodChart(rows, vector<int>(cols, 0));

  for (int i{0}; i < 3; i++) {
    for (int j{0}; j < 5; j++) {

      getFood(i, j, foodChart);

    }
  }

  return 0;
}
