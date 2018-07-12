///**********************************************************************************
/// Description: Implementation of the classic Bubble Sort
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> nums = {101, 99, 88, 77, 66, 55, 44, 33, 22, 11};
  int size = nums.size();

  for(int j{0}; j < size; j++) {
    int divide = 0;
    for (int i{1}; i < size; i++) {
      if (nums[divide] > nums[i]) {
        int temp = nums[i];
        nums[i] = nums[divide];
        nums[divide] = temp;
        divide += 1;
      } 
    }
  }

  for (int i{1}; i < size; i++) {}

  cout << "\n";
  for (auto num : nums) cout << " " << num;

  return 0;
}
