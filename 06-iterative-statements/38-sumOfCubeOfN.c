// program to print sum of cube of first n natural numbers

#include<stdio.h>
int main(){
    int num,result=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        int cube = i*i*i;
        result += cube;
    }
    printf("cube of first %d natural numbers = %d",num,result);
    return 0;
}