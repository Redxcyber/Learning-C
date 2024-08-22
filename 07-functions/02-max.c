#include<stdio.h>
int max(int x, int y){
    if(x>y){
        return x;
    } else if(y>x){
        return y;
    }
}
void main() {
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    c = max(a,b);
    printf("maximum number = %d",c);
}