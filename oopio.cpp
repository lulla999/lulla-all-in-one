// Lab 9:Q.1: Write a program that overloads the binary arithmetic '/' operator using a friend function.
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // Friend function declaration
    friend Number operator/(const Number &n1, const Number &n2);

    // Display function
    void display() const
    {
        cout << "Result = " << value << endl;
    }
};

// Friend function definition
Number operator/(const Number &n1, const Number &n2)
{
    if (n2.value == 0)
    {
        cout << "Error: Division by zero is not possible." << endl;
        return Number(0);
    }

    Number temp;
    temp.value = n1.value / n2.value;
    return temp;
}

int main()
{
    Number a(45), b(5), c;

    c = a / b;

    c.display();

    return 0;
}
