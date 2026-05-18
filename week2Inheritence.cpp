#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;
    void eat()   { cout << "Eating"; }
    void sleep() { cout << "Sleeping"; }
};

class Dog : public Animal {        // "Dog IS-A Animal"
public:
    void bark() { cout << "Woof!"; }
};

int main() {
    Dog d;
    d.name = "Rex";
    d.eat();    // both inherited + own method
    d.bark();
}