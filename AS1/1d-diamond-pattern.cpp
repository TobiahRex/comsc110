#include <iostream>
#include <string>
using namespace std;

int main() {
  string row1[] = { "", "", "","*", "", "", ""}, result;

  join(row1, "", result);

  cout << result << endl;

  return 0;
}
