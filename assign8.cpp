#include<iostream>
#include<string>
using namespace std;


class Person
{
    public:
    string name;
    int age;
    long long contactinfo;

    void getPdetails()
    {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Contact Info: ";
        cin >> contactinfo;
    }

    void displayPdetails()
    {
        cout << "\n NAME : " << name;
        cout << "\n AGE : " << age;
        cout << "\n CONTACT : " << contactinfo;
    }
};


class Employee : public Person
{
    public:
    int empId;
    double salary;

    void getEdetails()
    {
        getPdetails(); 
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEdetails()
    {
        displayPdetails(); 
        cout << "\n EMPLOYEE ID : " << empId;
        cout << "\n SALARY : " << salary;
    }
};


class Manager : public Employee
{
    public:
    string department;
    int teamSize;

    void getMdetails()
    {
        getEdetails(); 
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Team Size: ";
        cin >> teamSize;
    }

    void displayMdetails()
    {
        cout << "\n-------- Manager Details --------";
        displayEdetails(); 
        cout << "\n DEPARTMENT : " << department;
        cout << "\n TEAM SIZE : " << teamSize << endl;
    }
};

int main()
{
    Manager m1;

    // Accepts and displays data progressively through all 3 levels
    m1.getMdetails();
    m1.displayMdetails();

    return 0;
}
