//factorial using recursion

#include<stdio.h>
int fact(int n){
    if(n==0||n==1) return 1;
    else return n*fact(n-1);
}
int main(){
    int n;
    long int res;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n<0){
        printf("Negative numbers are not allowed\n");
        return 1;
    }else{
        printf("Factorial = %ld",fact(n));
        
    }
    return 0;
}