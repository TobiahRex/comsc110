///**********************************************************************************
/// Description: Sort array using selection sort.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 24, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
using namespace std;

vector<int> getArr();
void printArr(vector<int> &nums);
void swap(int &a, int &b);
void selectionSort(bool right, vector<int> &nums);

int main() {
  vector<int> nums;
  nums = getArr();
  cout << "The random array: ";
  printArr(nums);
  cout << endl;

  nums = getArr();
  selectionSort(true, nums);
  cout << "The Select Sorted (left): ";
  printArr(nums);
  cout << endl;

  nums = getArr();
  selectionSort(false, nums);
  cout << "The Select Sorted (right): ";
  printArr(nums);
  cout << endl;

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

void selectionSort(bool left, vector<int> &nums) {
  int size = nums.size();

  if (left) {
    for (int i{0}; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
        if (nums[i] > nums[j]) swap(nums[i], nums[j]);
      }
    }
  } else {
    for (int i{size - 1}; i > -1; i--) {
      for (int j = i - 1; j > -1; j--) {
        if (nums[i] < nums[j]) swap(nums[i], nums[j]);
      }
    }
  }
};
