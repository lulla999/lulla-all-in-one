#include <stdio.h>
#include <string.h>

int main() {
	int a,b;
    char choice[20];
    printf("Enter operation (conjunction or disjunction): ");
    scanf("%19s", choice); // %19s prevents buffer overflow

    if (strcmp(choice, "conjunction") != 0 && strcmp(choice, "disjunction") != 0) {
        printf("Invalid choice, Enter 'conjunction' or 'disjunction'\n");
        return 1; 
    } 
    else {
        printf("\nA | B | Result\n");
        printf("-------------\n");
    
        for(a = 1; a >= 0; a--) {
            for (b = 1; b >= 0; b--) {
                int res;
                if (strcmp(choice, "conjunction") == 0) {
                    res = a && b; // AND
                } 
                else {
                    res = a || b; // OR
                }

                // Convert 1 and 0 to 'T' and 'F'
                char char_a, char_b, char_res;
                
                if (a == 1) {
                    char_a = 'T';
                } else {
                    char_a = 'F';
                }

                if (b == 1) {
                    char_b = 'T';
                } else {
                    char_b = 'F';
                }

                if (res == 1) {
                    char_res = 'T';
                } else {
                    char_res = 'F';
                }
                printf("%c | %c | %c\n", char_a, char_b, char_res);
            }
        }
    }
    return 0;
}
