///**********************************************************************************
/// Description: Calculates various rainfall statistics based on user inputed data.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

void printResults(float const& s, float const& a, float const& l, float const& sm) {
  cout << "the total rainfall for the year is " <<
}

void askForRain(vector<float> & n, int & month) {
  string error("\nThat is not a valid input.  \nPlease enter a valid floating point number & try again\n");

  while(true) {
    int monthCount{};
    cout << "Enter the rainfall (in inches) for month #" << month  << ": ";
    float number{};
    cin >> number;

    if (number == 0 || number < 0) {
      cout << error << endl;
      cin.clear();
      cin.ignore();
    } else {
      n.push_back(number);
      break;
    }
  }
}

void beginProgram() {
  float sum{}, average{}, largest{}, smallest{};
  int month{0};
  vector <float> rainfall;
  while(month++ < 12) {
    askForRain(rainfall, month);
  }
  getResults(rainfall, sum, average, largest, smallest);
  printResults(sum, average, largest, smallest);
}

void getResults(vector<float> const& r, float & sum, float & avg, float & lrg, float & sm) {
  sort(r.begin(), r.end());
  for (rain : r) sum += rain;
  avg = sum / r.size();
  lrg = r[r.size() - 1];
  sm = r[0];
}

int main() {
  beginProgram();

  return 0;
}
