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
using namespace std;

void printResults(float const& s, float const& a, float const& l, float const& sm) {
  cout << setprecision(2) << fixed;
  cout << "\nthe total rainfall for the year is " << s << " inches." << endl;
  cout << "the average rainfall for the year is " << a << " inches." << endl;
  cout << "the largest amount of rainfall was " << l << " inches in month" << "<CHANGE>." << endl;
  cout << "the smallest amount of rainfall was " << sm << " inches in month" << "<CHANGE>." << endl;
}

void getResults(vector<float> & r, float & sum, float & avg, float & lrg, float & sm) {
  sort(r.begin(), r.end());
  for (auto rain : r) sum += rain;
  avg = sum / r.size();
  lrg = r[r.size() - 1];
  sm = r[0];
}

void askForRain(vector<float> & n, int & month, float & lrgM, float & smM) {
  string error("\nThat is not a valid input.  \nPlease enter a valid floating point number & try again\n");

  while(true) {
    cout << "Enter the rainfall (in inches) for month #" << month  << ": ";
    float number{};
    cin >> number;

    if (number == 0 || number < 0) {
      cout << error << endl;
      cin.clear();
      cin.ignore();
    } else {
      if (number > lrgM) lrgM = n;
      else if (number < smM) smM = n;
      n.push_back(number);
      break;
    }
  }
}

void beginProgram() {
  float sum{}, average{}, largest{}, smallest{};
  int month{0}, largestMonth{}, smallestMonth{};
  vector <float> rainfall;
  while(month++ < 12) {
    askForRain(rainfall, month, largestMonth, smallestMonth);
  }
  getResults(rainfall, sum, average, largest, smallest);
  printResults(sum, average, largest, smallest);
}

int main() {
  beginProgram();

  return 0;
}
