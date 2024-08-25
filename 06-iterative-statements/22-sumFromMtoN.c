// find sum of numbers from m to n

#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Enter two numbers : ");
    scanf("%d %d",&m,&n);
    while(m<=n){
        sum += m;
        m++;
    }
    printf("sum = %d",sum);
    return 0;
}