// wap to print the truth table of and , or operator by inserting the elements in a and b
#include <stdio.h>
int main() {
    int a, b,T,F;
    printf("Enter value for A (T OR F): ");
    scanf("%d", &a);
    printf("Enter value for B (T OR F): ");
    scanf("%d", &b);
    int A[2] = {T,F}; 
    int B[2] = {T,F}; 
    int i, j;
    printf("A B | A ^ B | A V B\n");
    printf("-------------------------\n");
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d %d |   %d   |   %d\n", A[i], B[j], A[i] && B[j], A[i] || B[j]);
        }
    }
    return 0;
}
