//merge two array and print merged array in reverse order
//reduced some functions {more precise code}

#include<stdio.h>

void inputArray(int arr[], int size){
    printf("Enter element of 1st array\n");
    for(int i=0; i<size; i++){
        printf("Enter element indexed %d : ",i);
        scanf("%d",&arr[i]);
    }
}


void mergeArray(int arr1[], int size1, int arr2[], int size2, int arr3[]){
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

void outputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    
    //taking size of Array-1 from user
    int size1;
    printf("Enter size of 1st Array  : ");
    scanf("%d",&size1);
    int arr1[size1];
    inputArray(arr1, size1);
    printf("------------------------------\n");

    //taking size of Array-2 from user
    int size2;
    printf("Enter size of 2nd Array  : ");
    scanf("%d",&size2);
    int arr2[size2];
    inputArray(arr2, size2);
    printf("------------------------------\n");

    //declaring array-3
    int size3 = size1 + size2;
    int arr3[size3];
    mergeArray(arr1, size1, arr2, size2, arr3);
    reverseArray(arr3, size3);

    //printing array-1
    printf("Array-1 : ");
    outputArray(arr1, size1);

    //printing array-2
    printf("Array-2 : ");
    outputArray(arr2, size2);

    //print reversed merged array
    printf("Reversed-Merged-Array : ");
    outputArray(arr3, size3);


    return 0;
}