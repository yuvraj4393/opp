#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    int salary;
    float increment;
    string position;

    Employee(int s,float i, string p)
    {
        salary=s;
        increment=i;
        position=p;

    }

    void display()
    {
        cout<<"\n Salary of EMployee=  "<<salary;
        cout<<"\n Increment of Employee= "<<increment<<"%";
        cout<<"\n POsition of employee ::  "<<position;
        cout<<"\n Constructor is called";

    }
    ~Employee()
    {
        cout<<"\n Destructor is invoked ";
    }

};

int main()
{
    Employee e1(50000,5,"Cleark");
    e1.display();
    return 0;
}
