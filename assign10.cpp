#include <iostream>
using namespace std;

template <typename T>
void findLarger(T a, T b) {
    if (a > b) {
        cout << "Larger value: " << a << endl;
    } else {
        cout << "Larger value: " << b << endl;
    }
}

int main() {
    
    cout << "Student Marks (85 vs 92): ";
    findLarger(85, 92);

    
    cout << "Product Prices (49.99 vs 39.50): ";
    findLarger(49.99, 39.50);

    
    cout << "Sensor Readings (1023.45 vs 1023.89): ";
    findLarger(1023.45, 1023.89);

    return 0;
}
