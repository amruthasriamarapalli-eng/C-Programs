//pure virtual function
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;   // Pure virtual function
};

class Circle : public Shape {
public:
    void area() {
        float r = 5;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        float l = 10, b = 5;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape {
public:
    void area() {
        float b = 10, h = 6;
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.area();
    r.area();
    t.area();

    return 0;
}
