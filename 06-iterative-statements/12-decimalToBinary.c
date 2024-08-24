#include<stdio.h>
void main(){
    int n;
    int binary = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        int digit = n%2; 
        n = n/2;
        // printf("%d ",digit);
        binary = binary*10+digit;
    }
    printf("binary = %d",binary);
}