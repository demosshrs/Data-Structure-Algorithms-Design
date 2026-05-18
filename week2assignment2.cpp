#include <iostream>
using namespace std; //Demos

int main() {
    double sum = 0;
    for (int n = 1; n <= 97; n += 2) {
        sum += (double)n / (n + 2);
    }
    cout << "Sum = " << sum << endl;
    return 0;
}