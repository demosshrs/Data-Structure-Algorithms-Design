#include <iostream>
using namespace std;

double min(double array[], int size) {
    double smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest)
            smallest = array[i];
    }
    return smallest;
}

int main() {
    double numbers[10];
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Minimum value: " << min(numbers, 10) << endl;
    return 0;
}