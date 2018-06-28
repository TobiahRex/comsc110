#include <iostream>

void test() {
  using namespace std;
  cout << "this is from test\n";
}

int main() {
  using namespace std;

  cout << "Hello World.\n";
  test();
}
