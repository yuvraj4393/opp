#include<iostream>
#include<string>
using namespace std;

class University
{
    public:
    string name;
    int age;
    long long contactinfo; // Changed to long long to prevent integer overflow with phone numbers

    void getdetails()
    {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter Contact info: ";
        cin >> contactinfo;
    }

    void displaydetails()
    {
        cout << "\n NAME : " << name;
        cout << "\n AGE : " << age;
        cout << "\n Contact : " << contactinfo;
    }
};

class Student : public University
{
    public:
    int rollno;
    string branch;

    void getSdetails()
    {
        getdetails();
        cout << "Enter Roll no: ";
        cin >> rollno;
        cout << "Enter Branch: ";
        cin >> branch; // Added missing semicolon
    }

    void displaySdetails()
    {
        cout << "\n-------- Student details --------";
        displaydetails(); // Displays common details from University base class
        cout << "\n Roll no: " << rollno;
        cout << "\n Branch: " << branch << endl;
    }
};

int main() // Added ()
{
    Student s1;
    
    // Read and display student information
    s1.getSdetails();
    s1.displaySdetails(); // Fixed object name from s to s1 and fixed typo

    return 0;
}
