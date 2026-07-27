#include <iostream>
using namespace std;

int main() {
    int n,a=1,b=1,fibonacci=0;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 1) {
        fibonacci=a;
    }
    else if (n == 2) {
        fibonacci=b;
    }
else {
    for (int i = 3; i <= n; i++) {
        fibonacci = a + b;
        a = b;
        b = fibonacci;
    }
}
    cout << "Fibonacci number of " << n << " is: " << fibonacci << "\n";

    return 0;
}
