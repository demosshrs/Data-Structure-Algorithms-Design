#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    return (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
}

int main() {
    char ch;
    cout << "Enter uppercase letter: ";
    cin >> ch;
    cout << "Lowercase: " << toLowerCase(ch) << endl;
    cin.ignore();
    cin.get();
    return 0;
}