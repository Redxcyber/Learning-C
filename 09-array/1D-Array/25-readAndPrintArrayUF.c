//read and print an array of n numbers using functions

#include <stdio.h>

void readArray(int arr[], int size) {
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    printf("Array : ");
    for (int i = 0; i <size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    readArray(arr, size);
    printArray(arr, size);

    return 0;
}