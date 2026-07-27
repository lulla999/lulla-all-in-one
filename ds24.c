#include <stdio.h>
int sumInductive(int n) {
    if (n == 1) {
        return 1; 
    }
    return n + sumInductive(n - 1); // Inductive step
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sumFormula = (n * (n + 1)) / 2;
    int sumRecursive = sumInductive(n);

    printf("Sum using Formula n(n+1)/2: %d\n", sumFormula);
    printf("Sum using Inductive Recursion: %d\n", sumRecursive);
    if(sumFormula == sumRecursive)
    {
    	printf("Hence, the statement is True ");
	}
	else
	{
		printf("Hence, the statement is False ");
	}
    return 0;
}
