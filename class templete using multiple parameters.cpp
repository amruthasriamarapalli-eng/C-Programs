//class templete using multiple parameters
#include <iostream>
using namespace std;

template <class T1, class T2>
class Example
{
private:
    T1 data1;
    T2 data2;

public:
    Example(T1 d1, T2 d2)
    {
        data1 = d1;
        data2 = d2;
    }

    void display()
    {
        cout << "First value: " << data1 << endl;
        cout << "Second value: " << data2 << endl;
    }
};

int main()
{
    Example<int, float> e1(10, 2.5);

    Example<char, string> e2('A', "C++");

    e1.display();

    cout << endl;

    e2.display();

    return 0;
}
