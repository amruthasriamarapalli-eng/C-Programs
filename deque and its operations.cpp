//deque and its operations
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // Insert elements at the rear
    d.push_back(10);
    d.push_back(20);

    // Insert element at the front
    d.push_front(5);

    cout << "Deque elements: ";

    for (deque<int>::iterator i = d.begin(); i != d.end(); ++i)
    {
        cout << *i << " ";
    }

    // Delete element from front
    d.pop_front();

    cout << "\nAfter pop_front(): ";

    for (deque<int>::iterator i = d.begin(); i != d.end(); ++i)
    {
        cout << *i << " ";
    }

    // Delete element from rear
    d.pop_back();

    cout << "\nAfter pop_back(): ";

    for (deque<int>::iterator i = d.begin(); i != d.end(); ++i)
    {
        cout << *i << " ";
    }

    // Insert again
    d.push_front(30);
    d.push_back(40);

    cout << "\nAfter push_front() and push_back(): ";

    for (deque<int>::iterator i = d.begin(); i != d.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}
