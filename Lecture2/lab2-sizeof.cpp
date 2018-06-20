#include <iostream>
using namespace std;

int main() {
  int i = 1;
  long l = 2;
  float f = 2.2;
  char c = 'c';

  cout << "Characters: " << sizeof(c) << endl;
  cout << "Integers: " << sizeof(i) << endl;
  cout << "Floats: " << sizeof(f) << endl;
  cout << "Longs: " << sizeof(l) << endl;

  return 0;
}
