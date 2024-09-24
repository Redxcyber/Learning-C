#include<stdio.h>
int main(){
    int num, sum=0;
    printf("Enter number : ");
    scanf("%d",&num);

    for(int i=num; i>0; i/=10){
        int digit = i%10;
        sum += digit;
    }
    printf("sum of digits = %d",sum);
    return 0;
}