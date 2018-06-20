#include <iostream>
using namespace std;

int main() {
    float f, c;

    cout << "Enter the temperature in Celsius: " << endl;
    cin >> c;

    f = (9/5) * c + 32;

    cout << f << " degrees Fahrenheit." << endl;

  return 0;
}
