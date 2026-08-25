#include <iostream>
#include <string>
using namespace std;

class lab {
public:
    int id;
    string bname;
    int noc;

    void input(int bookNumber) {
        cout << "enter book " << bookNumber << " id: ";
        cin >> id;
        cout << "enter book " << bookNumber << " name: ";
        cin >> bname;
        cout << "enter book " << bookNumber << " no of copies: ";
        cin >> noc;
    }

    void display(int bookNumber) {
        cout << "\n--- Book " << bookNumber << " Details ---" << endl;
        cout << "id of the book= " << id << endl;
        cout << "name of the book= " << bname << endl;
        cout << "no of copies= " << noc << endl;
    }
};

int main() {
    lab b1, b2;

    // Input for Book 1
    b1.input(1);
    
    cout << endl;

    // Input for Book 2
    b2.input(2);

    // Display details for both books
    b1.display(1);
    b2.display(2);

    return 0;
}
