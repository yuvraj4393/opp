#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    
    int empId1 = 104, empId2 = 208;
    cout << "Before Swap - Employee IDs: " << empId1 << ", " << empId2 << endl;
    swapValues(empId1, empId2);
    cout << "After Swap  - Employee IDs: " << empId1 << ", " << empId2 << endl << endl;


    string room1 = "B-102", room2 = "A-405";
    cout << "Before Swap - Room Numbers: " << room1 << ", " << room2 << endl;
    swapValues(room1, room2);
    cout << "After Swap  - Room Numbers: " << room1 << ", " << room2 << endl << endl;


    double priority1 = 1.5, priority2 = 4.0;
    cout << "Before Swap - Task Priorities: " << priority1 << ", " << priority2 << endl;
    swapValues(priority1, priority2);
    cout << "After Swap  - Task Priorities: " << priority1 << ", " << priority2 << endl;

    return 0;
}
