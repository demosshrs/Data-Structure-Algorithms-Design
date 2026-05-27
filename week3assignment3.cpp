#include <iostream>
#include <cmath>
using namespace std;

double futureValue(double principal, double rate, int years) {
    return principal * pow(1 + rate, years);
}

int main() {
    double principal, rate;
    int years;
    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter annual interest rate (e.g. 0.05): ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;
    cout << "Future value: " << futureValue(principal, rate, years) << endl;
    cin.ignore();
    cin.get();
    return 0;
}