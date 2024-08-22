#include<stdio.h>
void main() {
    int num, product=1;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        product = product*i; // product *= i;
    }
    printf("\nproduct of n numbers = %d",product);
}