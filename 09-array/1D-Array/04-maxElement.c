//print maximum element of the array

#include<stdio.h>
void main(){
    int i,n;
    printf("How many numbers you want to insert : ");
    scanf("%d",&n);

    int num[n];
    int length = sizeof(num)/sizeof(num[0]); 
    for(i=0; i<length; i++){
        printf("Enter numbers : ");
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(i=1; i<length; i++){
        if(num[i] > max){ // or (max < num[i])
            max = num[i];
        }
    }
    printf("Max number = %d",max);
}