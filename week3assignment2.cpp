#include <iostream>
using namespace std;

double m(int i) {
    double sum = 0;
    for (int n = 1; n <= i; n++) {
        sum += (double)n / (n + 1);
    }
    return sum;
}

int main() {
    int i;
    cout << "Enter i: ";
    cin >> i;
    cout << "Series sum: " << m(i) << endl;
    cin.ignore();
    cin.get();
    return 0;
}