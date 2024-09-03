#include<stdio.h>
void swap(int x, int y);
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("A = %d\nB = %d\n",a,b);
    swap(a,b);
    return 0;
}

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("A = %d\nB = %d",x,y);
}