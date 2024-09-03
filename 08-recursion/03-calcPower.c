//calculate a ki power n using recursion

#include<stdio.h>
int power(int a,int n);
int main(){
    int a,n,result=0;
    printf("Enter number : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&n);
    result = power(a,n);
    printf("Calculated power = %d",result);
    return 0;
}

int power(int a,int n){
    if(n==1){
        return a;
    }else{
        return a * power(a,n-1);
    }
}