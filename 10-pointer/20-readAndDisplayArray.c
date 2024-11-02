//read and display a array of n length taken from user using pointers

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    //array declaration
    int arr[n];
    int *parr = arr;
    //input array elements
    printf("Enter elements of the array ->\n");
    for(int i=0; i<n; i++){
        scanf("%d",parr+i);
    }
    //output array
    printf("arr[%d] = ",n);
    for(int i=0; i<n; i++){
        printf("%d ",*(parr+i));
    }
    return 0;
}