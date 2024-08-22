//convert decimal number to binary number using recursion

#include<stdio.h>
void decToBin(int n){
    if(n==1){
        printf("%d",n);
    } else {
        int digit = n%2;
        decToBin(n/2);
        printf("%d",digit); 
    }
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Binary representaton : ");
    decToBin(n);
}