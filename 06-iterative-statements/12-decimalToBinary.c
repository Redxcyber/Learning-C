#include<stdio.h>
void main(){
    int decimal;
    int binary = 0;
    int base = 1;
    printf("Enter a number : ");
    scanf("%d",&decimal);
    while(decimal>0){
        int rem = decimal%2; 
        binary = binary + (rem * base);
        decimal = decimal/2;
        base *= 10;
    }
    printf("binary = %d",binary);
}