#include<iostream>
#include<string>

using namespace std;
 class student
 {
    public:
    string name;
    int rollno;
    
    student(string name,int rollno)
    {
        this->rollno=rollno;
        this->name=name;

    }
    void display()
    {
        cout<<"\n Name of the student ::  "<<name;
        cout<<"\n Roll no of the student ::  "<<rollno;

    } 


 };
 int main()
 {
    student s1("Adityaraj",31);
    s1.display();
    return 0;
 }
