#include<stdio.h>
void main() {
    int Month,Days;
    printf("enter no of days : ");
    scanf("%d", &Days);
    
    Month = Days/30;
    Days = Days%30;

    printf("Month = %d , Days = %d", Month , Days);
}