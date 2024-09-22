//calculate sum of the square of elements

#include<stdio.h>
int main(){
    int size;
    int sum=0;
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
    printf("\narray : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    //calculate sum of square of elements
    for(int i=0; i<size; i++){
        int sqOfElement = num[i] * num[i];
        sum += sqOfElement;
    }

    //print sum
    printf("\nsum of square of elements = %d",sum);
    return 0;
}