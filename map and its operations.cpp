//map and its operations
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    // Insertion
    students[1] = "Amrutha";
    students[2] = "Anjali";
    students[3] = "Rahul";

    // Display
    cout << "Students:" << endl;
    for (auto x : students) {
        cout << x.first << " : " << x.second << endl;
    }

    // Access
    cout << "\nStudent with key 2: " << students[2] << endl;

    // Search
    if (students.find(3) != students.end())
        cout << "Key 3 found" << endl;

    // Delete
    students.erase(1);

    cout << "\nAfter deleting key 1:" << endl;
    for (auto x : students) {
        cout << x.first << " : " << x.second << endl;
    }

    // Size
    cout << "\nSize of map = " << students.size() << endl;

    return 0;
}
