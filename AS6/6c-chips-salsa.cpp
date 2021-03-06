///**********************************************************************************
/// Description: Calculates various rainfall statistics based on user inputed data.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;

void printStats(vector<string> & sauces, vector<int> & sales) {
  int totalSales{},
    high{},
    low{numeric_limits<int>::max()},
    size{};
  string hiSauce, loSauce;

  size = sales.size();

  for (int i{0}; i < size; i++) {
    // calc total sales;
    totalSales += sales[i];

    // detect highest seller
    if (sales[i] > high) {
      high = sales[i];
      hiSauce = sauces[i];
    }
    // detect lowest seller
    if (sales[i] < low) {
      low = sales[i];
      loSauce = sauces[i];
    }
  }

  cout << "\nTotal Sales: \t\t" << totalSales << endl;
  cout << "Hi Seller: \t\t" << hiSauce << endl;
  cout << "Lo Seller: \t\t" << loSauce << endl;
}
void printSales(vector<string> & sauces,  vector<int> & sales) {
  int size{};
  size = sauces.size();

  cout <<  "\n\n\tSalsa Sales Report" << endl << endl;
  cout << "Name\t\t\t" << "Jars Sold" << endl;
  string lb(33, '-');
  cout << lb << endl;

  for (int i{0}; i < size; i++)
    cout << sauces[i] << "\t\t\t" << setw(5) << sales[i] << endl;
}
void getSales(string const& type, int & answer) {
  string error("\n\nThat is not a valid input. Please try again\n\n");

  while (true) {
    cout << "Jars sold last month of " << type << ": ";
    cin >> answer;
    if (answer == 0 || answer < 0) {
      cout << error;
      cin.clear();
      cin.ignore();
    } else {
      break;
    }
  }
}

int main() {
  vector <string> sauces = {"mild", "medium", "sweet", "hot", "zesty"};
  vector <int> sales(5);
  int size{};
  size = sauces.size();

  for (int i{0}; i < size; i++) getSales(sauces[i], sales[i]);
  printSales(sauces, sales);
  printStats(sauces, sales);

  return 0;
}
