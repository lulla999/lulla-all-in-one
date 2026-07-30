#include <stdio.h>
#include <stdlib.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents integer overflow

        if (arr[mid] == target) {
            return mid; // Found at index mid
        }

        if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    return -1; // Not found
}

int main() {
    int n, target;

    //  Get total number of elements (N)
    printf("Enter the number of elements (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
int i ;
    // Input array elements (must be entered in sorted order)
    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input target value to search
    printf("\nEnter the element to search for: ");
    scanf("%d", &target);

    // Perform Binary Search
    int result = binarySearch(arr, n, target);

    // Display result
    printf("\n--- Search Result ---\n");
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d was not found in the array.\n", target);
    }

    // Free allocated memory
    free(arr);

    return 0;
}
