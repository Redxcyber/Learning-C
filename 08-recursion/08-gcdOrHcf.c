// find GCD or HCF using recursion

#include<stdio.h>
int gcd(int a, int b);
int main(){
    int n1,n2,result;
    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);
    result = gcd(n1,n2);
    printf("GCD of %d and %d = %d",n1,n2,result);
    return 0;
}

int gcd(int a, int b){
    int rem = a%b;
    if(rem==0){
        return b;
    }else{
        return gcd(b,rem);
    }
}