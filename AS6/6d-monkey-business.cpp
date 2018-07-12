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
  float &h,
  float &l,
  int &hDay,
  int &lDay,
  int &monkeyHi,
  int &monkeyLo,
  vector<float> &avgs
) {

  for (int i{1}; i < 8; i++) {
    cout << "The average amount eaten on day " << i << " is " << setprecision(2) << fixed << avgs[i] << " pounds." << endl;
  }
  cout << "\nMonkey number " << monkeyLo << " ate the least amount of food, ";
  cout << setprecision(2) << fixed << l << " pounds, on day " << lDay << endl;

  cout << "Monkey number " << monkeyHi << " ate the most amount of food, ";
  cout << setprecision(2) << fixed << h << " pounds, on day " << hDay << endl;
}

vector<float> calcStats(
  float &high,
  float &low,
  int &highDay,
  int &lowDay,
  int &monkeyHi,
  int &monkeyLow,
  vector< vector<float> > &foodChart
) {
  vector<float> avgs(7);

  for (int i{0}; i < 7; i++) {
    float curr_avg{};

    for (int j{0}; j < 3; j++) {
      curr_avg += foodChart[j][i];

      if (foodChart[j][i] < low) {
        low = foodChart[j][i];
        monkeyLow = (j + 1);
        lowDay = (i + 1);
      }

      if (foodChart[j][i] > high) {
        high = foodChart[j][i];
        monkeyHi = (j + 1);
        highDay = (i + 1);
      }
    }
    avgs[i] = (curr_avg / 3.0);
  }
  return avgs;
}

void getFood(
  int & i,
  int & j,
  vector< vector<float> > &foodChart
) {
  string error("That is not a valid input.\n");
  string nonNeg("Enter a non-negative number.\n");
  float food{};

  while(true) {
    cout << "Enter the pounds eaten by monkey number " << (i + 1) << " on day " << (j + 1) << ": ";
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
  int highDay{}, lowDay{}, monkeyHi{}, monkeyLo{};
  vector< vector<float> > foodChart(rows, vector<float>(cols, 0));

  for (int i{0}; i < rows; i++) {
    for (int j{0}; j < cols; j++) {
      getFood(i, j, foodChart);
    }
  }

  vector<float> averages = calcStats(
    high,
    low,
    highDay,
    lowDay,
    monkeyHi,
    monkeyLo,
    foodChart
  );

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
