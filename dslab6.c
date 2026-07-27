// wap to calculate the number of ways to arrange your name using permutation.
#include <stdio.h>
#include <string.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    int len = strlen(name);
    int numWays = factorial(len);
    printf("Number of ways to arrange your name: %d\n", numWays);
    return 0;
}
