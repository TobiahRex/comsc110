///**********************************************************************************
/// Description: Calculates various rainfall statistics based on user inputed data.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 24, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;

struct rain {
  int month;
  float total_rain;
  int temp_high;
  int temp_lo;
}

void printResults(vector<rain> &rainfall) {
  float totalRain{},
    avg_rain{},
    avg_temp{},
    high_temp{},
    lo_temp{numeric_limits<int>::max()};
  int highMonth{}, loMonth{};

  for (auto m : rainfall) {
    totalRain += m.total_rain;
    avg_temp += ((m.temp_high + m.temp_lo)/2.0);
    if (m.temp_high > high_temp) {
      high_temp = m.temp_high;
      hiMonth = m.month;
    };
    if (m.temp_lo < temp_lo) {
      temp_lo = m.temp_lo;
      loMonth = m.month;
    };
  }
  avg_temp = (avg_temp / 12.0);
  avg_rain = (totalRain_rain / 12.0);

  cout << setprecision(2) << fixed;
  cout << "\ntTotal Rainfall: " <<  totalRain << endl;
  cout << "\nAverage Monthly Rain: " << avg_rain << endl;
  cout << "\nAverage Monthly Temperature: " << avg_rain << endl;
  cout << "\nHighest Monthly Temperature: " << avg_rain << " (" << hiMonth << ")" << endl;
  cout << "\nLowest Monthly Temperature: " << avg_rain << " (" << loMonth << ")" << endl;
}

void getResults(vector<float> & r, float & sum, float & avg, float & lrg, float & sm) {
  sort(r.begin(), r.end());
  for (auto rain : r) sum += rain;
  avg = sum / r.size();
  lrg = r[r.size() - 1];
  sm = r[0];
}

void askForRain(float &total) {
  string error("\n\tThat is not a valid input.  \nPlease enter a valid floating point number & try again\n");

  while(true) {
    cout << "\tTotal Rainfall: ";
    getline(cin, total);
    cout << endl;

    if (number == 0 || number < 0 || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
    } else {
      break;
    }
  }
}

void askForTemp(int &temp, string &temp_type) {
  string error("\nThat is not a valid input.  \nPlease enter a valid floating point number & try again\n");

  while(true) {
    cout << temp_type;
    getline(cin, total);
    cout << endl;

    if (total == 0 || number < -100 || number > 140 || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
    } else {
      break;
    }
  }
}

void beginProgram() {
  vector<rain> rainfall;
  for (int i{0}; i < 12; i++) {
    cout << "Month" << i + 1 << endl;
    rainfall.push_back(rain());
    rain[i].month = [i + 1];
    askForRain(rain[i].total_rain);
    askForTemp("\tHigh Temperature", rain[i].temp_high);
    askForTemp("\tLow Temperature", rain[i].temp_lo);
  }

  printResults(rainfall);
}

int main() {
  beginProgram();

  return 0;
}
