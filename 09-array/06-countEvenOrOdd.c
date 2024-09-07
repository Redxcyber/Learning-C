// count no of even and odd elements in an array

#include<stdio.h>
void main(){
    int i,n,evenCount=0,oddCount=0;
    printf("How many numbers you want to insert : ");
    scanf("%d",&n);

    int num[n];
    int length = sizeof(num)/sizeof(num[0]); 
    for(i=0; i<length; i++){
        printf("Enter numbers : ");
        scanf("%d",&num[i]);
    }
    for(i=0; i<length; i++){
        if(num[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even elements = %d\nOdd elements = %d",evenCount,oddCount);
}