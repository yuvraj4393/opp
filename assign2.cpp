#include<iostream>
#include<string>
using namespace std;

class employee 
{
    public:
    int empid,empsalary;
    string empname;


    void displayinfo()
    {
        cout<<"\n Details of employee";
        
        cout<<"\n Enter Employee id  : ";
        cin>>empid;
        cout<<"\n Enter employee name  : ";
        cin>>empname;

        cout<<"\n Enter employee slaray  :  ";
        cin>>empsalary;



    }
    void display()
    {
        cout<<"\n Enter Employee id  : "<<empid;
        cout<<"\n Enter Employee name  : "<<empname;
        cout<<"\n Enter Employee salary  : "<<empsalary;
    }


};
    int main()
    {
       
        employee e1,e2;
      
        e1.displayinfo();
         cout<<"\n ----------Details of employee--------";
        e1.display();
        
        return 0;
       

    }
    


   
    
