#include<stdio.h>
void main(){
    int sum(int x, int y) {
        return x+y;
    }
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d %d",&a, &b);
    c = sum(a,b);
    printf("%d + %d = %d",a,b,c);
}