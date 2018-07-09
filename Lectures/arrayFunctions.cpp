#include <iostream>
#include <string>

using namespace std;

int main() {
  string in;
  bool flag{true};
  int x = 2, y = 3;
  void menu [](){
    cout << "1. add\n"
            "2. sub\n"
            "3. quit\n";
  }

  menu();
  while(flag) {
    cout << "Enter command: ";
    cin >> in;
    switch(in[0]) {
      case '1': cout << x + y << endl; break;
      case '2': cout << x + y << endl; break;
      case '3': flag = false; break;
      default: cout << "Wrong command\n";
    }
  }

  return 0;
}
