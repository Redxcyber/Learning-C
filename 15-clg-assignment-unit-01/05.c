//swap two variable

#include<stdio.h>
void main(){
    int A,B,temp;
    printf("Enter two numbers : ");
    scanf("%d %d",&A,&B);
    printf("A=%d \nB=%d\n",A,B);
    temp=A;
    A=B;
    B=temp;
    printf("A=%d \nB=%d\n",A,B);
}