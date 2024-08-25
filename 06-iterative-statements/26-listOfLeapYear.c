//write a program to print all leap year from 1900 to 2100

#include<stdio.h>
int main(){
    int m=1900;
    int n=2100;
    do{
        if((m % 4 == 0 && m % 100 != 0) || (m % 400 ==0)){
            printf("%d is leap year\n",m);
        }else{
            printf("%d is not leap year\n",m);

        }
        m++;
    } while(m<=n);
    return 0;
}