//interchange second element with the second last element

#include<stdio.h>
int main(){
    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    
    //array declaration
    int num[size];

    //input array elemnts
    printf("\nenter elements of the array ->\n");
    for(int i=0; i<size; i++){
        printf("num[%d] : ",i);
        scanf("%d",&num[i]);
    }

    //print original array
    printf("\narray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    //interchange second and second last element
    int temp = num[1];
    num[1] = num[size-2];
    num[size-2] = temp;

    //print modified array
    printf("\narray after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    return 0;
}