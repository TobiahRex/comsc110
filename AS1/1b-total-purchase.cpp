///**********************************************************************************
/// Description: This program holds the prices of in five variables.  Displays each item's price, the subtotal of the sale, the maount of sales tax, and the final total.  Tax is assumed as 7%.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 24, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float item1 = 15.95;
  float item2 = 24.95;
  float item3 = 6.95;
  float item4 = 12.95;
  float item5 = 3.95;

  float tax = 0.07;
  float subtotal = item1 + item2 + item3 + item4 + item5;
  auto plus_tax = round((subtotal * tax) * 100) / 100;
  float total = subtotal + plus_tax;

  cout << "Item 1: " << item1 << endl;
  cout << "Item 2: " << item2 << endl;
  cout << "Item 3: " << item3 << endl;
  cout << "Item 4: " << item4 << endl;
  cout << "Item 5: " << item5 << endl;
  cout << "Subtotal: " << subtotal << endl;
  cout << "Sales Tax: " << plus_tax << endl;
  cout << "Total: " << total << endl;

  return 0;
}
