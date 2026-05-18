#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor
    Student() { name = "Unknown"; age = 0; }

    // Parameterised Constructor
    Student(string n, int a) : name(n), age(a) {
        cout << "Student created: " << name << endl;
    }

    // Copy Constructor
    Student(const Student& s) {
        name = s.name; age = s.age;
    }

    // Destructor
    ~Student() {
        cout << name << " object destroyed." << endl;
    }

    void display() {
        cout << name << " | Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20);    // parameterised
    Student s2 = s1;            // copy constructor
    s1.display();               // Alice | Age: 20
}   // destructor called for s2, then s1