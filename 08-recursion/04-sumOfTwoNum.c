//sum of two numbers using recursion

#include<stdio.h>
int main(){
    int n1,n2,result=0;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    result = sum(n1,n2);
    printf("sum = %d",sum);
    return 0;
}

int sum(int a, int b){
    if(b==0){
        return a;
    }else if(b>0){
        return a + sum(a,b-1);
    }
}