//create a function that calculates the product of 3 number entered by the user , regardless of the number intered being integer or floating point . print the result as output
#include   <iostream>   
using namespace std;
int main() {
    double num1, num2, num3, product;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    product = num1 * num2 * num3;
    
    cout << "The product of the three numbers is: " << product << endl;
    
    return 0;
}