#include <stdio.h>
void main() {
    int a,b,c,max=0;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c) {
        max = a;
    } else if (b>=c) {
        max = b;
    } else if (c>=b) {
        max = c;
    } else {
        printf("invalid input !!");
    }
    printf("greatest number = %d",max);
}