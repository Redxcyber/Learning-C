//add two num using call by reference

#include<stdio.h>
void sum(int *a, int *b, int *res){
    *res = *a + *b;
}
int main(){
    int x, y, result;
    printf("Enter two numbers : ");
    scanf("%d %d",&x, &y);
    sum(&x, &y, &result);
    printf("Sum = %d",result);
    return 0;
}