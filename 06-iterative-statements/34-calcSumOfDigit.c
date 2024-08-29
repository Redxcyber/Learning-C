// take a number from user then print reverse of it and calculate sum of its digits

#include<stdio.h>
int main(){
    int num, reverse=0, sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(; num != 0; num /= 10){
        int digit = num%10;
        reverse = reverse*10+digit;
        sum += digit; 
    }
    printf("reverse of digit = %d\n",reverse);
    printf("sum of digits = %d\n",sum);
    return 0;
}