//calculate factorial using one fn and calculate sum of digit of factorial using another fn

#include<stdio.h>
//fn to calculate factorial
long int calc_factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*calc_factorial(n-1);
    }
}
//fn to calculate sum of digits of factorial
int sum_of_digits(int n){
    long int factorial = calc_factorial(n);
    int sum = 0;
    for(int i=factorial; i>0; i/=10){
        int rem = i%10;
        sum += rem;
    }
    printf("Factorial = %ld\n",factorial);
    printf("Sum of digits = %d\n",sum);
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    //fn call
    sum_of_digits(n);
    return 0;
}