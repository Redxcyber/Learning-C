#include<stdio.h>
void main() {
    int num, reverse=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(;num != 0; num /= 10){
        int digit = num % 10;
        reverse = reverse*10+digit;
    }
    printf("reversed number = %d",reverse);
}