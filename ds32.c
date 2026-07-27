#include <stdio.h>
#include <string.h>

int main() {
    char choice[20];
    printf("Enter operation (tautology or contradiction): ");
    scanf("%19s", choice); 

    if (strcmp(choice, "tautology") != 0 && strcmp(choice, "contradiction") != 0) {
        printf("Invalid choice, Enter 'tautology' or 'contradiction'\n");
        return 1; 
    } 
    else {
        printf("\nA | B | Result\n");
        printf("-------------\n");
        int a, b; 
        for (a = 1; a >= 0; a--) {
            for (b = 1; b >= 0; b--) {
                int res;
                if (strcmp(choice, "tautology") == 0) {
                    res = 1; // Tautology is true 'T' (1)
                } 
                else {
                    res = 0; // Contradiction is false 'F' (0)
                }

                // Converting 1 and 0 to 'T' and 'F' 
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