// find sum of digits of number using recursion

#include<stdio.h>
int digit_sum(int x);
int main(){
    int n,result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = digit_sum(n);
    printf("Sum of digits = %d",result);
    return 0;
}

int digit_sum(int x){
    if(x<10){
        return x;
    }else{
        return x%10 + digit_sum(x/10);
    }
}

