///**********************************************************************************
/// Description: Uses a menu to show user a Math problem.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 2, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int printMenu() {
  string title("Math Tutor Menu");
  string boundry("--------------------------");
  string menu("\n1. Addition problem\n2. Subtraction problem\n3. Multiplication problem\n4. Division problem\n5. Quit this program");
  cout << '\t' << title << endl << boundry << menu << endl << boundry << endl;
  cout << "Enter your choice (1-5): ";
  return 0;
}

int printResponse(int const& s, int const& a) {
  if (s == a) {
    cout << "\nPerfect!" << "\n\n";
  } else if (s != a) {
    cout << "\nSorry the correct answer is " << s << "\n\n";
  }
  return 0;
}

int main() {
  bool play{true};
  do {
    printMenu();
    int rand1(0), rand2(0), r1Length(0), r2Length(0), wWidth(0);
    float solution(0);
    srand(time(NULL));
    wWidth = 11;
    rand1 = rand() % 1000;
    rand2 = rand() % 1000;
    r1Length = to_string(rand1).length();
    r2Length = to_string(rand2).length();
    string lineBreak(9, '_');
    int choice{};
    cin >> choice;

    switch(choice) {
      case 1: {
        solution = rand1 + rand2;

        cout << setw(wWidth - r1Length) << rand1 << endl;
        cout << "+" << setw(wWidth - r1Length - 1) << rand2 << endl;
        cout << lineBreak << endl;
        cout << setw(wWidth - r2Length);

        int answer{};
        cin >> answer;
        cin.ignore();

        printResponse(solution, answer);
      }; break;
      case 2: {
        solution = rand1 - rand2;

        cout << setw(wWidth - r1Length) << rand1 << endl;
        cout << "-" << setw(wWidth - r1Length - 1) << rand2 << endl;
        cout << lineBreak << endl;
        cout << setw(wWidth - r2Length);

        int answer{};
        cin >> answer;
        cin.ignore();

        printResponse(solution, answer);
      }; break;
      case 3: {
        solution = rand1 * rand2;

        cout << setw(wWidth - r1Length) << rand1 << endl;
        cout << "x" << setw(wWidth - r1Length - 1) << rand2 << endl;
        cout << lineBreak << endl;
        cout << setw(wWidth - r2Length);

        int answer{};
        cin >> answer;
        cin.ignore();

        printResponse(solution, answer);
      }; break;
      case 4: {
        float dividend = rand() % 100;
        float divisor = rand() % 10;
        float div_solution = dividend / divisor;
        if (isinf(div_solution)) div_solution = 0;

        cout << setprecision(2) << fixed;
        cout << div_solution << endl << endl;

        cout << setprecision(0) << fixed;
        cout << setw(wWidth - 3) << dividend << endl;
        cout << "\u00F7" << setw(wWidth - 4) << divisor << endl;
        cout << lineBreak << endl;
        cout << setw(wWidth - 1);

        int answer{};
        cin >> answer;
        cin.ignore();

        printResponse(div_solution, answer);
      } break;
      case 5: play = false; break;
      default: break;
    }
  } while (play);

  return 0;
}
