#include <iostream>
using namespace std;

int main() {

    char ch = 'Q';     // normal variable
    char* p = &ch;     // pointer storing address of ch

    cout << ch << endl;    // prints Q
    cout << *p << endl;    // prints Q using pointer

    ch = 'Z';              // changing value directly
    cout << *p << endl;    // pointer now shows Z

    *p = 'X';              // changing value using pointer
    cout << ch << endl;    // ch becomes X

    return 0;
}