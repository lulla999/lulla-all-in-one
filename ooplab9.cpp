#include <iostream>
using namespace std;

class Number {
private:
    float value;

public:
    // Constructor to initialize value
    Number(float v = 0) {
        value = v;
    }

    // Declare friend function to overload '/'
    friend Number operator/(Number obj1, Number obj2);

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }
};

// Definition of friend function
Number operator/(Number obj1, Number obj2) {
    Number temp;
    temp.value = obj1.value / obj2.value; // Divide the values
    return temp;                         // Return the result object
}

int main() {
    Number num1(100.0);
    Number num2(4.0);

    // Using overloaded '/' operator
    Number result = num1 / num2; 

    cout << "Result of num1 / num2:" << endl;
    result.display();

    return 0;
}