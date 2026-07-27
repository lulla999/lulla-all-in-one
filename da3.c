#include <stdio.h>
int extendedGCD(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = extendedGCD(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int main() {
    int a, b, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int gcd = extendedGCD(a, b, &x, &y);

    printf("GCD: %d\n", gcd);
    printf("Bezout's Coefficients are:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("Verification: %d*(%d) + %d*(%d) = %d\n", a, x, b, y, gcd);

    return 0;
}
