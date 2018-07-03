///**********************************************************************************
/// Description: Calculates the falling distance of an object and displays the results.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
using namespace std;

void coinToss() {
  string result("");
  srand(time(NULL));

  int random{};
  do {
    random = random() % 10;
  } while(2 !== random || random != 1);

  switch(random) {
    case 1: result = "heads"; break;
    case 2: result = "tails"; break;
    default: break;
  }

  cout << result;
}

int main() {

  int tosses{};
  while (true) {
    cout << "How many tosses should I make? "
    cin >> tosses;
    if (tosses == 0) {
      cout << "\nInput must be anumber - Please try again";
      cin.clear();
      cin.ignore();
    } else break;
  }

  return 0;
}
