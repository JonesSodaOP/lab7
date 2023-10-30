#include <iostream>
#include <string>

using namespace std;

int main()
{ 
  int menu_choice; 
  double length, radius;
  double area_square, area_circle;
  const double PI = 3.14;

  cout << "1 -- square" << endl;
  cout << "2 -- circle" << endl;
  cout << "3 -- quit" << endl;

  cin >> menu_choice;
   // Nested if statement
  if (menu_choice != 1 && menu_choice != 2 && menu_choice != 3) { 
      cout << "Invalid input. Try again." << endl; // Any other choice than 1, 2, or 3
    } else {
      // Choice number 1 output
    if (menu_choice == 1) {
    cout << "Side length of the square: ";
    cin >> length;
    area_square = length * length;
    cout << "Area = " << area_square << endl;
      // Choice number 2 output
      } else if (menu_choice == 2) {
      cout << "Radius of the circle: ";
      cin >> radius;
      area_circle = PI * radius * radius;
      cout << "Area = " << area_circle << endl;
      // Choice number 3 output
        } else if (menu_choice == 3) { 
      cout << " " << endl;
    }
  }
    return 0;
}
  // End of program