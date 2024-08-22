// check equality of numbers

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Equal");
    } else {
        printf("Not Equal");
    }
}