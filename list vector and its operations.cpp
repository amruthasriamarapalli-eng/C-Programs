//list vector and its operations
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    vector<int> v;

    // Vector operations
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";

    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    v.pop_back();

    cout << "\nAfter pop_back(): ";

    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    v.insert(v.begin() + 1, 25);

    cout << "\nAfter insert(): ";

    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    // List operations
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "\n\nList elements: ";

    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
    {
        cout << *i << " ";
    }

    l.pop_front();

    cout << "\nAfter pop_front(): ";

    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
    {
        cout << *i << " ";
    }

    l.push_back(30);

    cout << "\nAfter push_back(): ";

    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}
