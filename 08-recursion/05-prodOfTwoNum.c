// product of two numbers using recursion

#include<stdio.h>
int prod(int a, int b);
int main(){
    int n1,n2,result;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);

    result = prod(n1,n2);
    printf("product = %d",result);
    return 0;
}

int prod(int a, int b){
    if(b==0){
        return 0;
    }else if(b>0){
        return a + prod(a,b-1);
    }else{
        return -prod(a,-b);
    }
}
