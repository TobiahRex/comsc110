///**********************************************************************************
/// Description: Implementation of the classic Bubble Sort - Enhancement
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {101, 99, 88, 77, 66, 55, 44, 33, 22, 11};
  int size = nums.size();

  for (int i{size}; i > 1; i--) {
    int lgIndex{};
    for (int j{0}; j < i; j++) {
      if (nums[j] > nums[lgIndex]) lgIndex = j;
    }
    int temp = nums[i - 1];
    nums[i - 1] = nums[lgIndex];
    nums[lgIndex] = temp;
  }

  return 0;
}
