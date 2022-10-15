#include <iostream>
using namespace std;

// Base Class
class Person {  // The class
  public:  // Access specifier
    string name;  // The person's name
    int age;  // The person's age in years
    string idNumber;  // The Person's ID number
};


// Derived class
class Student: public Person {
  public:
    int classLoad;  // The number of credits the student is taking
};


// Derived class
class Staff: public Person {
  public:
    double pay;  // The staff member's hourly wage
    double yearWage = pay * 2080;  // The staff members estimated yearly salary
};
