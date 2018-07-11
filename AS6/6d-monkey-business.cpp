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
#include <limits>
#include <iomanip>
using namespace std;

void printResults(
  float h,
  float l,
  int hDay,
  int lDay,
  int monkeyHi,
  int monkeyLo,
  vector<float> avgs,
) {

  for (int i{0}; i < 7; i++) {
    cout << "The average amount of eaten on day " << (i + 1) << "is " << setprecision(2) << fixed << avgs[i] << " pounds." << endl;
  }

  cout << "Monkey number " << monkeyLo << " at the least amount of food, " << setprecision(2) << fixed << " pounds, on day " << lowDay << endl;
}

vector<float> calcStats(
  float high,
  float low,
  int highDay,
  int lowDay,
  int monkeyHi,
  int monkeyLow,
  vector< vector<float> > &foodChart
) {
  vector<float> avgs;

  for (int i{0}; i < 7; i++) {
    float curr_avg{};
    for (int j{0}; j < 3; j++) {
      curr_avg += foodChart[i][j];

      if (foodChart[i][j] < low) {
        low = foodChart[i][j];
        monkeyLow = j;
        lowDay = i;
      }

      if (foodChart[i][j] < high) {
        high = foodChart[i][j];
        monkeyHi = j;
        highDay = i;
      }
    }
    avgs[i] = (curr_avg / 3);
  }
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
  float high{}, low{numeric_limits<int>::max()};
  int monkeyHi{}, monkeyLo{}, highDay{}, lowDay{};
  vector<vector<float>> foodChart(rows, vector<float>(cols, 0));

  for (int i{0}; i < rows; i++) {
    for (int j{0}; j < cols; j++) getFood(i, j, foodChart);
  }

  vector<float> averages = calcStats(foodChart);
  printResults(
    high,
    low,
    highDay,
    lowDay,
    monkeyHi,
    monkeyLo,
    averages
  );

  return 0;
}
