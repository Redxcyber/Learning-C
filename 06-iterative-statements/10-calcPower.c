#include<stdio.h>
int main(){
    int num, exp, result=1;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Enter exponential power : ");
    scanf("%d",&exp);

    for(int i=1; i<=exp; i++){
        result *= num;
    }
    printf("calculated value = %d",result);
    return 0;
}