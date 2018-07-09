///**********************************************************************************
/// Description: Finds all prime numbers between 1-100 and prints results to a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 3, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool isPrime(ofstream & file, int & n) {
  int i{1};
  while(i++ <= 100) {
    if (i != n && (n % i == 0)) {
      return false;
    }
  }

  file << n;
  file << "\n";

  return true;
}

int main() {
  ofstream myFile;
  myFile.open("./AS5/primeList.txt");

  int i{1};
  while(i++ < 100) isPrime(myFile, i);

  myFile.close();
  cout << "Prime numbers written to primeList.txt" << endl;

  return 0;
}
