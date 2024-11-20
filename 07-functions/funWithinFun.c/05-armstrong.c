//use one fn to calculate sum of square of digits and another to check if it is armstrong or not 
#include<stdio.h>
//fn to calc power
int calc_power(int num, int exp){
    int res=1;
    for(int i=1; i<=exp; i++){
        res *= num;
    }
    return res;
}
//fn to calc sum of square of digits
int calc_sumOfSquare(int n){
    int count=0;
    for(int i=n; i>0; i/=10){
        count++;
    }
    int sum=0;
    for(int i=n; i>0; i/=10){
        int digit = i%10;
        int power = calc_power(digit,count);
        sum += power;
    }
    return sum;
}
//fn to check armstrong
void check_armstrong(int n){
    int sum = calc_sumOfSquare(n);
    if(sum==n){
        printf("YES, %d is armstrong\n",n);
    }else{
        printf("NO, %d is not armstrong\n",n);
    }
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    //fn call
    check_armstrong(n);
    return 0;
}