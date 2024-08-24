// detect error during data input
#include<stdio.h>
void main(){
    int num;    // if you enter char instead of int , program will terminate and else statements will run
    char ch;
    printf("Enter a number and character : ");
    if(scanf("%d %c",&num, &ch)==2){
        printf("\nData read successfully");
    }
    else {
        printf("\nError in data input");
    }
}