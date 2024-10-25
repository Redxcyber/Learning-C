//find exponent "x" raised to power "y" using recursion

#include<stdio.h>
int exponent(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*exponent(a,b-1);
    }
}
int main(){
    int x,y,result;
    printf("Enter Base and Power = ");
    scanf("%d %d",&x,&y);
    result = exponent(x,y);
    printf("Result = %d",result);
    return 0;
}