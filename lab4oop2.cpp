#include <iostream>
using namespace std;

class Complex {
public:
    float real, imaginary;
    void input() {
        cin >> real >> imaginary;
    }
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter real and imaginary parts for complex number 1: ";
    c1.input();

    cout << "Enter real and imaginary parts for complex number 2: ";
    c2.input();
    
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    diff.real = c1.real - c2.real;
    diff.imaginary = c1.imaginary - c2.imaginary;

    cout << "\nNumber 1 complex number : "; c1.display();
    cout << "Number 2 complex number: "; c2.display();
    cout << "Sum:      "; sum.display();
    cout << "Diff:     "; diff.display();

    return 0;
}
