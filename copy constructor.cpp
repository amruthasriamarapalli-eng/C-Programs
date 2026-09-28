//copy constructor
#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    // Parameterized constructor
    Student(int a)
    {
        age = a;
    }

    // Copy constructor
    Student(Student &s)
    {
        age = s.age;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1(20);

    // Copy constructor is called
    Student s2(s1);

    s1.display();
    s2.display();

    return 0;
}
