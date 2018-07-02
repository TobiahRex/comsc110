///**********************************************************************************
/// Description: This program asks the user to choose from a menu of Geometry calculations, and renders the respective answer based on the users input.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: June 28, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Geometry Calculator" << endl;
  string menu("\n1. Calculate the area of a Circle\n2. Calculate the area of a Rectangle\n3. Calculate the area of a Triangle.\n4. Quit\n\nEnter your choice (1-4): ");

  bool play{true};
  do {
    cout << menu;
    int choice{};
    cin >> choice;

    switch(choice) {
      case 1: {
        cout << "\nEnter the circle's radius: ";
        float circle_radius{};
        cin >> circle_radius;
        cin.ignore();
        cout << "\nThe area is " << 3.14 * (circle_radius * circle_radius) << endl;
      }; break;
      case 2: {
        cout << "\nEnter the rectangle's length: ";
        float length{};
        cin >> length;
        cin.ignore();
        cout << "\nEnter the rectangle's width: ";
        float width{};
        cin >> width;
        cin.ignore();
        cout << "\nThe area is " << width * length << endl;
      }; break;
      case 3: {
        cout << "\nEnter the length of the base: ";
        float base{};
        cin >> base;
        cin.ignore();
        cout << "\nEnter the traingle's height: ";
        float height{};
        cin >> height;
        cin.ignore();
        cout << "\nThe area is " << (base * 0.5) * height << endl;
      }; break;
      case 4: play = false; break;
      default: break;
    }
  } while(play);

  return 0;
}
