#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    int    age;

public:
    // Setter with validation
    void setName(string n)   { if (!n.empty()) name = n; }
    void setSalary(double s) { if (s >= 0)     salary = s; }
    void setAge(int a)       { if (a>=18&&a<=65) age = a; }

    // Getters
    string getName()   const { return name; }
    double getSalary() const { return salary; }
    int    getAge()    const { return age; }

    void display() const {
        cout << "Name   : " << name   << endl;
        cout << "Salary : " << salary << endl;
        cout << "Age    : " << age    << endl;
    }
};

int main() {
    Employee emp;
    emp.setName("John Doe");
    emp.setSalary(50000);
    emp.setAge(30);
    emp.display();
    return 0;
}