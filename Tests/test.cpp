#include <iostream>
#include <vector>
#include <cstdlib>  // srand, rand
#include <ctime>    // time

using namespace std;
void calc (int a, int& b)
{
int c;

c = a + 2;
a = a * 3;
b = c + a;
}
int main() {

  int x = 1;
  int y = 2;
  int z = 3;

  calc(x, y);
  cout << x << " " << y << " " << z << endl;
  return 0;
}
