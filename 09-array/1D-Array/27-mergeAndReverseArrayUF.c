//merge two array and print merged array in reverse order

#include<stdio.h>

void readArray1(int arr1[], int size1){
    printf("Enter element of 1st array\n");
    for(int i=0; i<size1; i++){
        printf("Enter element indexed %d : ",i);
        scanf("%d",&arr1[i]);
    }
}

void readArray2(int arr2[], int size2){
    printf("Enter element of 2nd array\n");
    for(int i=0; i<size2; i++){
        printf("Enter element indexed %d : ",i);
        scanf("%d",&arr2[i]);
    }
}

void mergeArray(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3){
    for(int i=0; i<size1; i++){
        arr3[i] = arr1[i];
    }

    for(int i=0; i<size2; i++){
        arr3[size1+i] = arr2[i];
    }
}

void reverseArray(int arr3[], int size3) {
    for (int i = 0; i<size3/2; i++){
        int temp = arr3[i];
        arr3[i] = arr3[size3 - i - 1];
        arr3[size3 - i - 1] = temp;
    }
}

void printArray1(int arr1[], int size1){
    printf("Array-1 : ");
    for(int i=0; i<size1; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
}

void printArray2(int arr2[], int size2){
    printf("Array-2 : ");
    for(int i=0; i<size2; i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
}

void printReversedArray(int arr3[], int size3){
    printf("Reversed-Merged-Array : ");
    for(int i=0; i<size3; i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");
}


int main(){
    
    //taking size of Array-1 from user
    int size1;
    printf("Enter size of 1st Array  : ");
    scanf("%d",&size1);
    int arr1[size1];
    readArray1(arr1, size1);

    //taking size of Array-2 from user
    int size2;
    printf("Enter size of 2nd Array  : ");
    scanf("%d",&size2);
    int arr2[size2];
    readArray2(arr2, size2);

    //declaring array-3
    int size3 = size1 + size2;
    int arr3[size3];
    mergeArray(arr1, arr2, arr3, size1, size2, size3);
    reverseArray(arr3, size3);
    printArray1(arr1, size1);
    printArray2(arr2, size2);
    printReversedArray(arr3, size3);


    return 0;
}