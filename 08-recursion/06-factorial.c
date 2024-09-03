// factorial using recursion

#include<stdio.h>
int factorial(int x);
int main(){
    int n;
    int result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = factorial(n);
    printf("Factorial = %ld",result);
    return 0;
}

int factorial(int x){
    if(x==1){
        return x;
    }else{
        return x * factorial(x-1);
    }
}