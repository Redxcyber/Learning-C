//calculate number of duplicate element in array

#include <stdio.h>

int main() {
    int size, i, j, count = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    //array declaration
    int num[size], freq[size];


    //input array elemnts
    printf("\nenter elements of the array ->\n");
    for(int i=0; i<size; i++){
        printf("num[%d] : ",i);
        scanf("%d",&num[i]);
    }


    //print original array
    printf("\narray : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }


    // Find duplicates and count them
    for (i = 0; i < size; i++) {
        int countDuplicate = 1;  // Count of current element
        for (j = i + 1; j < size; j++) {
            if (num[i] == num[j]) {
                countDuplicate++;
                freq[j] = 0;  // Mark this as already counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = countDuplicate;  // Store the count of the element
        }
    }

    // Count the number of elements that appear more than once
    for (i = 0; i < size; i++) {
        if (freq[i] > 1) {
            count++;
        }
    }

    // Output the number of duplicates
    printf("\nNumber of unique duplicate elements in the array: %d\n", count);

    return 0;
}
