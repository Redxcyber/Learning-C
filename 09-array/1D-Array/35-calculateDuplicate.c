#include <stdio.h>

#define MAX_SIZE 100 // Define maximum size for the array

int main() {
    int n, i;
    int arr[MAX_SIZE];
    int count[MAX_SIZE] = {0}; // Array to store the count of each element
    int duplicateCount = 0; // To count the number of unique duplicates

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input validation
    if (n > MAX_SIZE) {
        printf("Error: Maximum size is %d\n", MAX_SIZE);
        return 1;
    }

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count occurrences of each element
    for (i = 0; i < n; i++) {
        count[arr[i]]++; // Increment count for this element
    }

    // Count how many elements have duplicates
    for (i = 0; i < MAX_SIZE; i++) {
        if (count[i] > 1) {
            duplicateCount++;
        }
    }

    // Output the results
    printf("Number of unique duplicate elements: %d\n", duplicateCount);
    
    return 0;
}