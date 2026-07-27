kl'/;j,hk98g+*+
 \]vbj-+olp;8['9]
 0\';0'jlkbjvndhjr;klp[kjuyhgfghyui90-=0987]''#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Recursive function to calculate factorial
double factorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        // Calculate the term: (i * i) / i!
        double term = (double)(i * i) / factorial(i);

        // Alternate signs: positive for odd terms, negative for even terms
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    cout << fixed << setprecision(6);
    cout << "The sum of the series up to " << n << " terms is: " << sum << endl;

    return 0;
}
