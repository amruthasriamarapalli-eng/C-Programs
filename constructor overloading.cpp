//constructor overloading
#include <iostream>
using namespace std;

class Student
{
public:
    // Constructor with no arguments
    Student()
    {
        cout << "Default Constructor" << endl;
    }

    // Constructor with one argument
    Student(int age)
    {
        cout << "Age: " << age << endl;
    }

    // Constructor with two arguments
    Student(int age, float marks)
    {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;
    Student s2(20);
    Student s3(20, 85.5);

    return 0;
}
