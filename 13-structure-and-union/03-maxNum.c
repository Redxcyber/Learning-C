//find max num out of three using structure

#include<stdio.h>
int main(){
    struct numbers{
        int a,b,c;
        int max;
    };
    struct numbers num;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num.a, &num.b, &num.c);
    
    if(num.a>=num.b && num.a>=num.c) num.max = num.a;
    else if(num.b>=num.c) num.max = num.b;
    else num.max = num.c;

    printf("maximum number = %d",num.max);
    return 0;
}