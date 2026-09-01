#include<iostream>
#include<string>
using namespace std;
class book
{
    private:
    string title;
    int bid;
    float price;

    public:

    book()      
    {
        title= "Unknown";
        bid= 500;
        price=0.0;

    }

    book(string t,int b,float p)      
    {
        title=t;
        bid=b;
        price=p;

    }

    void display()
    {
        cout<< "Title"<< title<<endl;
        cout<<"BOok id "<<bid<<endl;
        cout<<"Price  "<<price<<endl;

    }
};
int main()
{
book b1;
book b2("C++",600,700);
cout<<"Book 1: "<<endl;
b1.display();
 
cout<<"Book 2: "<<endl;
b2.display();

return 0;

}
