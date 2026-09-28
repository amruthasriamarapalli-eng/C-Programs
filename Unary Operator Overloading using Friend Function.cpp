//Unary Operator Overloading using Friend Function
#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    friend void operator-(Number &n);

    void display() {
        cout << "Value = " << x << endl;
    }
};

void operator-(Number &n) {
    n.x = -n.x;
}

int main() {
    Number n(10);

    cout << "Before: ";
    n.display();

    -n;

    cout << "After: ";
    n.display();

    return 0;
}
