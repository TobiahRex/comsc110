///**********************************************************************************
/// Description: Sort array using selection sort.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 24, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;

vector<int> getArr();
void printArr(vector<int> &nums);
void swap(int &a, int &b);
void selectionSort(bool &right, vector<int> &nums);

int main() {
  vector<int> nums;
  nums = getArr();
  cout << "The random array: ";
  printArr(nums);

  nums = getArr();
  selectSort(true, nums);
  printArr(nums);

  nums = getArr();
  selectSort(false, nums);
  printArr(nums);

  return 0;
}

vector<int> getArr() {
  vector<int> nums = {3,6,4,7,8,1,2,0,9,5};
  return nums;
}

void printArr(vector<int> &nums) {
  for (auto n : nums) cout << " " << n;
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void selectionSort(bool &right, vector<int> &nums) {
  int size = size(nums);

  if (right) {
    for (int i{0}; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
        if (nums[i] > nums[j]) swap(nums[i], nums[j]);
      }
    }
  } else {
    for (int i{size}; i > 0; i++) {
      for (int j = i - 1; j > 0; j++) {
        if (nums[i] < nums[j]) swap(nums[i], nums[j]);
      }
    }
  }
};
