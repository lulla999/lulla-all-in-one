// Lab:9 Q.2: Write a C++ program to overload the pointer-to-member (->) operator.
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    // Setter function
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }
    // Getter functions
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
class SmartPointer
{
private:
    Student *ptr;
public:
    // Constructor
    SmartPointer(Student *p)
    {
        ptr = p;
    }
    // Overloading -> operator
    Student* operator->()
    {
        return ptr;
    }
};

int main()
{
    Student s;
    string name;
    int age;
    // Take input from user
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    // Set data using setter
    s.setData(name, age);
    // Create SmartPointer object
    SmartPointer sp(&s);
    // Display data using getter
    cout << "\nStudent Details" << endl;
    cout << "Name : " << sp->getName() << endl;
    cout << "Age  : " << sp->getAge() << endl;
    return 0;
}