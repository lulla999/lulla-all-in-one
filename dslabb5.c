#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the n number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i- 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                printf("1 ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
