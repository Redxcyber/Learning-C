#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("How many numbers you want to insert : ");
    scanf("%d",&n);

    int num[n];
    int length = sizeof(num)/sizeof(num[0]); 
    printf("Enter numbers : ");
    for(i=0; i<length; i++){
        scanf("%d",&num[i]);
    }
    for(i=0; i<length; i++){
        sum += num[i];
    }
    printf("Sum of all numbers = %d",sum);
}