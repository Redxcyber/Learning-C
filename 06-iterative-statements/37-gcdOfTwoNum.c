// GCD(greatest common factor) = HCM(highest common factor)

#include<stdio.h>
int main(){
    int num1,num2,dividend,divisor,remainder;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1, &num2);
    if(num1>num2){
        dividend = num1;
        divisor = num2;
    }else{
        dividend = num2;
        divisor = num1;
    }
    while(remainder){  // while(divisor) ----> valid too
        remainder = dividend%divisor;
        dividend = divisor;
        divisor = remainder;
    }
    printf("GCD/HCF of %d and %d = %d",num1,num2,dividend);
    return 0;
}