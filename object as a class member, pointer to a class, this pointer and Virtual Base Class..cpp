//object as a class member, pointer to a class, this pointer and Virtual Base Class. 
#include <iostream>
using namespace std;

class Address
{
public:
    string city;

    void getCity()
    {
        cout << "Enter city: ";
        cin >> city;
    }
};

class Student
{
public:
    string name;
    Address addr;   // Object of Address class as a member

    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;
        addr.getCity();
    }

    void display()
    {
        cout << "\nStudent Name: " << name;
        cout << "\nCity: " << addr.city;
    }
};

int main()
{
    Student s;
    s.getData();
    s.display();

    return 0;
}
