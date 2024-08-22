#include<stdio.h>
void main(){
    int i,n;
    printf("How many numbers you want to insert : ");
    scanf("%d",&n);

    int num[n];
    int length = sizeof(num)/sizeof(num[0]); 
    printf("Enter numbers : ");
    for(i=0; i<length; i++){
        scanf("%d",&num[i]);
    }
    int lowestNum = num[0];
    for(i=0; i<length; i++){
        if(lowestNum > num[i]){ // or (num[i] < lowestnum)
            lowestNum = num[i];
        }
    }
    printf("Lowest number = %d",lowestNum);
}