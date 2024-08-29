//calculated power of any number using loop

#include<stdio.h>
int main(){
    int num, power, result=1;
    printf("enter number : ");
    scanf("%d",&num);
    printf("enter power : ");
    scanf("%d",&power);
    for(int i=1; i<=power; i++){
        result = result*num;
    }
    printf("evaluated value = %d",result);
    return 0;
}