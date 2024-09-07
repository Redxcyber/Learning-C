// sum of n natural numbers using recursion

#include<stdio.h>
int sum(int x);
int main(){
    int n,result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = sum(n);
    printf("Sum = %d",result);
    return 0;
}

int sum(int x){
    if(x==1){
        return x;
    }else{
        return x + sum(x-1);
    }
}