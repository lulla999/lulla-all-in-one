#include <stdio.h>

void generateFibonacci(int n) {
    if (n <= 0) return;

    // Array to store Fibonacci terms
    int fib[n];

    // Base conditions
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
    }

    // Apply the recurrence relation
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Display the generated sequence
    printf("First %d terms of the Fibonacci sequence:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int n = 10; // Number of terms
    generateFibonacci(n);
    return 0;
}