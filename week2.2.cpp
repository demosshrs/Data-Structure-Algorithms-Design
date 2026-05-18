#include <iostream>
#include <string>
using namespace std;

// --- Base Class
class Shape {
protected:
    string color;
public:
    Shape(string c) : color(c) {}
    void describe() {
        cout << "Shape: " << color << endl;
    }
    virtual double area() = 0; // pure virtual (covered later)
};

// --- Derived Class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(string c, double r) : Shape(c), radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
    void display() {
        describe(); // call inherited method
        cout << "Area: " << area() << endl;
    }
};

// --- Derived Class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(string c, double w, double h)
        : Shape(c), width(w), height(h) {}
    double area() override { return width * height; }
};

int main() {
    Circle    c("Red", 5.0);  c.display();
    Rectangle r("Blue", 4, 6);
    cout << "Rect area: " << r.area() << endl;
}