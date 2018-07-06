///**********************************************************************************
/// Description: Makes a series of random coin tosses [head/tails] and outpus the results
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void coinToss() {
  string result("");
  vector<int> coins = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
  int random = rand() % 10;
  switch(coins[random]) {
    case 1: result = "heads"; break;
    case 2: result = "tails"; break;
    default: break;
  }

  cout << result;
}

int main() {
  srand(time(NULL));
  int tosses{}, i{};
  bool play{true};
  while(play) {
    cout << "How many tosses should I make? ";
    cin >> tosses;
    if (tosses == 0 || tosses < 0) {
      cout << "\nInput must be a number(+) - Please try again";
      cin.clear();
      cin.ignore();
    } else {
      play = false;
    }
  }

  do {
    i += 1;
    cout << setw(2) << i << ": \t";
    coinToss();
    cout << endl;
  } while(--tosses > 0);

  return 0;
}
