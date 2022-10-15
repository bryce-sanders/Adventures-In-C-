#include <iostream>
#include <vector>
#include"people.h"
using namespace std;

vector<Person> directory;


int print_main_menu() {
    // Display the main menu to the user
    cout << "\n";
    cout << "Welcome to Schooldentity. To begin, please make a selection \n";
    cout << "from the following menu by entering its number below: \n";
    cout << "\n";
    cout << "1. Enter new person \n";
    cout << "2. Look up existing person \n";
    cout << "3. Quit \n \n";

    return 0;
}


int make_selection() {
    // Get user to make a selection from the main menu
    int selection;
    cout << "Enter a selection: ";
    cin >> selection; // Get user input from the keyboard
    
    if (selection == 1) {
        cout << "\n";
        cout << "Good\n";
    }
    else if (selection == 2) {
        cout << "\n";
        cout << "Good\n";
    }
    else if (selection == 3) {
        cout << "\n";
        cout << "Good\n";
    }
    else {
        cout << "\n";
        cout << "#=== Not a valid selection ===#\n";
        cout << "#=== Make another selection ===#\n";
    }

    return 0;
    }


int main() {
    // The main function of the director file
    print_main_menu();
    make_selection();
    main();


    return 0;
}
