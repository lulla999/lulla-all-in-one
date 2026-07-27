#include <stdio.h>

void printPrimeFactors(int n) {
    printf("%d = ", n);
    int original = n;
    int isFirst = 1;
int i;
    for (i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            if (!isFirst) {
                printf(" * ");
            }
            printf("%d", i);
            isFirst = 0;
            n /= i;
        }
    }
    if (n > 1) {
        if (!isFirst) printf(" * ");
        printf("%d", n);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter an integer greater than 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Please enter an integer greater than 1.\n");
    } else {
        printPrimeFactors(num);
    }

    return 0;
}
