//use of multiple catch blocks
#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 5.5;
        else if (choice == 3)
            throw 'A';
        else
            throw "Invalid choice";
    }

    catch (int x)
    {
        cout << "Integer exception caught: " << x << endl;
    }

    catch (double x)
    {
        cout << "Double exception caught: " << x << endl;
    }

    catch (char x)
    {
        cout << "Character exception caught: " << x << endl;
    }

    catch (const char* x)
    {
        cout << "String exception caught: " << x << endl;
    }

    return 0;
}
