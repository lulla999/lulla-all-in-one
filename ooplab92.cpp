#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Constructor
    Student(int i) {
        id = i;
    }

    // Overload the -> operator
    // It returns 'this' (a pointer to the current object)
    Student* operator->() {
        return this;
    }

    // A member function to display details
    void showDetails() {
        cout << "Student ID: " << id << endl;
    }
};

int main() {
    Student s1(101);

    // Call member function using object with '->' operator
    s1->showDetails();

    return 0;
}