#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float class_a, class_b, class_c, total;

  cout << "Enter the number of Class A tickets sold: " << endl;
  cin >> class_a;
  cout << "Enter the number of Class B tickets sold: " << endl;
  cin >> class_b;
  cout << "Enter the number of Class C tickets sold: " << endl;
  cin >> class_c;

  total = (class_a * 15) + (class_b * 12) + (class_c * 9);

  cout << "Total income from tickets sales is: $" << total << ".00" << endl;

  return 0;
}
