#include <iostream>
#include"people.h"
using namespace std;

int main() {
    // The main function of the director file. Displays main
    // menu to user and requests their input.
    Person directory[10];

    cout << "Welcome to Schooldentity. To begin, please make a selection \n";
    cout << "from the following menu by entering its number below: \n";
    cout << "\n";
    cout << "1. Enter new person";
    cout << "2. Look up existing person";
    cout << "3. Quit \n";

    // Get user to make a selection
    int selection; 
    cout << "Enter a selection: ";
    cin >> selection; // Get user input from the keyboard
    cout << "Your number is: " << selection; // Display the input value

    return 0;
}