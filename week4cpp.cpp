#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nArray elements: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
