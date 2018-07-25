///**********************************************************************************
/// Description: Calculates various weather information about months of the year.
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
};

void printResults(vector<rain> &rainfall);
void askForRain(float &total);
void askForTemp(string temp_type, int &temp);
void beginProgram();

int main() {
  beginProgram();
  return 0;
}

void askForRain(float &total) {
  string error("\n\tThat is not a valid input.  \nPlease enter a valid floating point number & try again\n");

  while(true) {
    cout << "\tTotal Rainfall: ";
    cin >> total;

    if (total == 0 || total < 0 || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }
}

void askForTemp(string temp_type, int &temp) {
  string error("\nThat is not a valid input.  Please enter a valid floating point number & try again\n");

  while(true) {
    cout << temp_type;
    cin >> temp;

    if (temp == 0 || temp < -100 || temp > 140 || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }
}

void printResults(vector<rain> &rainfall) {
  float totalRain{},
    avg_rain{},
    avg_temp{},
    high_temp{},
    lo_temp{numeric_limits<int>::max()};
  int hiMonth{}, loMonth{};

  for (auto m : rainfall) {
    totalRain += m.total_rain;
    avg_temp += ((m.temp_high + m.temp_lo)/2.0);
    if (m.temp_high > high_temp) {
      high_temp = m.temp_high;
      hiMonth = m.month;
    };
    if (m.temp_lo < lo_temp) {
      lo_temp = m.temp_lo;
      loMonth = m.month;
    };
  }
  avg_temp = (avg_temp / 12.0);
  avg_rain = (totalRain / 12.0);

  cout << setprecision(2) << fixed;
  cout << "Total Rainfall: " <<  totalRain << endl;
  cout << "Average Monthly Rain: " << avg_rain << endl;
  cout << "Average Monthly Temperature: " << avg_rain << endl;
  cout << "Highest Temperature: " << avg_rain << " (" << hiMonth << ")" << endl;
  cout << "Lowest Temperature: " << avg_rain << " (" << loMonth << ")" << endl;
}

void beginProgram() {
  vector<rain> rainfall;
  for (int i{0}; i < 12; i++) {
    cout << "Month " << i + 1 << endl;
    rainfall.push_back(rain());
    rainfall[i].month = i + 1;

    askForRain(rainfall[i].total_rain);
    askForTemp("\tHigh Temperature: ", rainfall[i].temp_high);
    askForTemp("\tLow Temperature: ", rainfall[i].temp_lo);
  }

  printResults(rainfall);
}
