///**********************************************************************************
/// Description: This program generates random math problems to help tutor students in addition.  If program gives students feedback on correct or incorrect answers.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 28, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int rand1(0), rand2(0), solution(0), r1Length(0), r2Length(0), solutionLength(0), wWidth(0);
  srand(time(NULL));

  rand1 = rand() % 1000;
  rand2 = rand() % 1000;
  solution = rand1 + rand2;
  wWidth = 11;
  r1Length = to_string(rand1).length();
  r2Length = to_string(rand2).length();
  solutionLength = to_string(solution).length();
  string lineBreak(8, '_');

  cout << setw(wWidth - r1Length) << rand1 << endl;
  cout << "+" << setw(wWidth - r1Length - 1) << rand2 << endl;
  cout << lineBreak << endl;

  cout << "\nEnter your answer here: ";
  int answer{};
  cin >> answer;

  if (answer != solution) {
    cout << "Sorry that answer is incorrect.\n" << endl;
  } else {
    cout << "Congratulations!\n" << endl;
  }

  cout << "The answer is " << solution << endl;

  return 0;
}
