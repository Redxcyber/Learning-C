//program to demonstrate call by value and reference;

#include<stdio.h>
void callByValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
void callByReference(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a=15,b=10;
    printf("Initial Values , a=%d and b=%d\n",a,b);
    callByValue(a,b);
    printf("Value after call by value function, a=%d and b=%d\n",a,b);
    callByReference(&a,&b);
    printf("Value after call by refernce function, a=%d and b=%d\n",a,b);
    return 0;
}