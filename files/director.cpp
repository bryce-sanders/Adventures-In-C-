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


int enter_person() {
    // Get user to enter information for new person
    string type;
    cout << "\n";
    cout << "Is the person a student (stu) or a staff member (sm)?: ";
    cin >> type; // Get user input from the keyboard

    if (type == "stu") {
        // Create new student object
        Student new_person;
        cout << "\n";

        // Get student info
        string name;
        cout << "Enter the student's name: ";
        cin >> name; // Get user input from the keyboard
        string idNumber;
        cout << "Enter the student's ID Number: ";
        cin >> idNumber; // Get user input from the keyboard
        int classLoad;
        cout << "Enter the student's credit load: ";
        cin >> classLoad; // Get user input from the keyboard

        // Set student info
        new_person.name = name;
        new_person.idNumber = idNumber;
        new_person.classLoad = classLoad;

        directory.push_back(new_person);
    }
    else if (type == "sm") {
        // Create new staff object
        Staff new_person;
        cout << "\n";

        // Get staff info
        string name;
        cout << "Enter the staff's name: ";
        cin >> name; // Get user input from the keyboard
        string idNumber;
        cout << "Enter the staff's ID Number: ";
        cin >> idNumber; // Get user input from the keyboard
        double pay;
        cout << "Enter the staff's hourly pay Number: ";
        cin >> pay; // Get user input from the keyboard

        // Set staff info
        new_person.name = name;
        new_person.idNumber = idNumber;
        new_person.pay = pay;

        directory.push_back(new_person);
    }
    else {
        cout << "\n";
        cout << "#=== Not a valid person type ===#\n";
        cout << "#=== Make another selection ===#\n";
    }

    return 0;
}


int make_selection() {
    // Get user to make a selection from the main menu
    int selection;
    cout << "Enter a selection: ";
    cin >> selection; // Get user input from the keyboard
    
    if (selection == 1) {
        enter_person();
    }
    else if (selection == 2) {
        cout << "\n";
        cout << "Good\n";
    }
    else if (selection == 3) {
        cout << "\n";
        cout << "Exiting... Have a good day";
        exit(0);
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
