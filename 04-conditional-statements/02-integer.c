#include<stdio.h>
void main() {
    int num, res;
    printf("Enter a integer : ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is positive",num);
    } else if (num < 0) {
        printf("%d is negative",num);
    } else if (num == 0){
        printf("%d is zero", num);
    } else {
        printf("invalid input !!");
    }
}