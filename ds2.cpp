#include <stdio.h>
#include <math.h>

int main() {
    int A[100], B[100];
    int p,q;
    int i, j;
    float x;
    int floor_result, ceil_result;

    // Initializing the size and elements for Set A and Set B
    printf("Enter the number of elements for Set A: ");
    scanf("%d", &p);
    printf("Enter %d elements for A:\n", p);
    for(i = 0; i < p; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nEnter the number of elements for Set B: ");
    scanf("%d", &q);
    printf("Enter %d elements for B:\n", q);
    for(i = 0; i < q; i++) {
        scanf("%d", &B[i]);
    }

    // Cartesian product (A x B)
   
    printf("\n--- CARTESIAN PRODUCT (A x B) ---\n");
    printf("A x B = { ");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("%d, %d ", A[i], B[j]);
        }
    }
    printf("}\n");
    printf("---------------------------------\n");

    // Floor and ceiling function

    printf("--- FLOOR AND CEILING FUNCTIONS ---\n");
    printf("Enter a decimal number (e.g., 3.7 or -2.4): ");
    scanf("%f", &x);

    floor_result = (int)floor(x);
    ceil_result = (int)ceil(x);

    printf("Floor of %.2f   = %d\n", x, floor_result);
    printf("Ceiling of %.2f = %d\n", x, ceil_result);
    printf("-----------------------------------\n");

    return 0;
}
