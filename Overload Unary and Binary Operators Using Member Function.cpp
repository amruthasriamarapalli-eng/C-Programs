//Overload Unary and Binary Operators Using Member Function
#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }

    // Unary operator overloading
    void operator-()
    {
        x = -x;
    }

    // Binary operator overloading
    Number operator+(Number n)
    {
        return Number(x + n.x);
    }

    void display()
    {
        cout << "Value: " << x << endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    // Unary operator
    -n1;
    cout << "After Unary Operator:" << endl;
    n1.display();

    // Binary operator
    Number n3 = n1 + n2;
    cout << "After Binary Operator:" << endl;
    n3.display();

    return 0;
}
