#include <iostream>
using namespace std;


int add(int x) {
  return x += 1;
}

int subtract(int x) {
  return x -= 1;
}

int multiply(int x) {
  return x * 2;
}

int SIZE = 3;
int funcs[SIZE] = {add, subtract, multiply};

void change(int arr[], int size) {
  int num = 4;
  for (int index = 0; index < size; index++) {
    arr[index](num);
  }
  cout << num;
}

int main() {
  const int SIZE = 3;
  int nums[SIZE] = {1,2,3};
  change(funcs, SIZE);
}
