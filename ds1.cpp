#include <stdio.h>

int main() {
    int U[100], A[100], B[100];
    int m, n, o;
    int i, j, found;

    // Initializing the size and elements
    printf("Enter the number of elements for Universal Set (U): ");
    scanf("%d", &m);
    printf("Enter %d elements for U:\n", m);
    for(i = 0; i < m; i++) {
        scanf("%d", &U[i]);
    }

    printf("\nEnter the number of elements for Set A: ");
    scanf("%d", &n);
    printf("Enter %d elements for A:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nEnter the number of elements for Set B: ");
    scanf("%d", &o);
    printf("Enter %d elements for B:\n", o);
    for(i = 0; i < o; i++) {
        scanf("%d", &B[i]);
    }

    printf("\n--- RESULTS ---\n");

    // Union
    printf("Union (A U B): { ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    for(i = 0; i < o; i++) {
        found = 0;
        for(j = 0; j < n; j++) {
            if(B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("%d ", B[i]);
        }
    }
    printf("}\n");

    // Intersection 
    printf("Intersection (A n B): { ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < o; j++) {
            if(A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("}\n");

    // Difference (A - B)
    printf("Difference (A - B): { ");
    for(i = 0; i < n; i++) {
        found = 0;
        for(j = 0; j < o; j++) {
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("%d ", A[i]);
        }
    }
    printf("}\n");

    // Difference (B - A)
    printf("Difference (B - A): { ");
    for(i = 0; i < o; i++) {
        found = 0;
        for(j = 0; j < n; j++) {
            if(B[i] == A[j]) {
                found = 1; // Found in A, so skip 
                break;
            }
        }
        if(found == 0) {
            printf("%d ", B[i]);
        }
    }
    printf("}\n");

    // Complement of A
    printf("Complement of A : { ");
    for(i = 0; i < m; i++) {
        found = 0;
        for(j = 0; j < n; j++) {
            if(U[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");

    // Complement of B
    printf("Complement of B : { ");
     for(i = 0; i < m; i++) {
        found = 0;
        for(j = 0; j < o; j++) {
            if(U[i] == B[j]) {
                found = 1; // Found in B, so skip 
                break;
            }
        }
        if(found == 0) {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");

    return 0;
}
