#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string course;
    int age;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter course: ";
        getline(cin, course);
    }

    // Function to display student details
    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Age        : " << age << endl;
        cout << "Course     : " << course << endl;
    }
};

int main() {
    Student s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}
