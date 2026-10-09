/**
 * @file practical 5_input.cpp
 * @author Prajwal Nigade (Roll No: 38)
 * @brief Practical 5 (Interactive): Student Details with Console Input
 */

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string course;

public:
    // Constructor
    Student(int rollNumber, string name, string course) {
        this->rollNumber = rollNumber;
        this->name = name;
        this->course = course;
    }

    // Display student details
    void displayDetails() {
        cout << "Student Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int rollNumber;
    string name;
    string course;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Course: ";
    getline(cin, course);

    cout << endl;

    // Displaying student details
    Student s1(rollNumber, name, course);
    s1.displayDetails();

    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}
