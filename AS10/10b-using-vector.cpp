///**********************************************************************************
/// Description: Using various vector methods.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 24, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
using namespace std;

vector<int> getArr();
void printArr(vector<int> &nums);\

int main() {
  vector<int> nums = getArr();
  vector<int>::size_type sz;
  cout << "Array: ";
  printArr(nums);

  cout << "\narray.size() = " << nums.size() << endl;
  cout << "array.capacity() = " << nums.capacity() << endl;
  sz = nums.capacity();
  nums.reserve(100);
  cout << "making array grow..." << endl;
  for (int i = 0; i < 100; ++i) {
    nums.push_back(i);
    if (sz != nums.capacity()) {
      sz = nums.capacity();
      cout << "capacity changed: " << sz << '\n';
    }
  }

  nums = getArr();
  cout << "\nArray: " << endl;
  printArr(nums);
  cout << endl;
  cout << "position at 5: " << nums.at(5) << endl;
  cout << "position at front: " << nums.front() << endl;
  cout << "position at back: " << nums.back() << endl;
  cout << "\n";

  cout << "array.push_back(1000): ";
  nums.push_back(1000);
  printArr(nums);
  cout << endl;

  cout << "array.pop_back(): ";
  nums.pop_back();
  printArr(nums);
  cout << endl;

  cout << "array.insert(nums.begin(), 999): ";
  nums.insert(nums.begin(), 999);
  printArr(nums);
  cout << endl;

  cout << "array.erase(nums.begin() + 3): ";
  nums.erase(nums.begin() + 3);
  printArr(nums);
  cout << "\t// 4 is gone" << endl;

  vector<int> other = {1,2,3};
  cout << "\nother array: ";
  printArr(other);
  cout << "\narray.swap(other): ";
  nums.swap(other);
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
