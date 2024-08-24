#include <stdio.h>
void main() {
    int num, sum=0;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    // for(int i=0; i<=num; i++) {
    //     sum = sum+i; // sum += i;
    // }
    // printf("sum of first %d natural numbers = %d",num,sum);


    // <------------both are correct , below one is more precise----------------------> 


    for(int i=1; i<=num; i++) {
        sum = sum+i; // sum += i;
    }
    printf("sum of first %d natural numbers = %d",num,sum);
}