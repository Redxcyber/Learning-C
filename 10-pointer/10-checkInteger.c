//check whether the number entered ix positive negative or zero

#include<stdio.h>
int main(){
    int num, *pnum = &num;
    printf("Enter number : ");
    scanf("%d",pnum);
    if(*pnum>0){
        printf("Number entered is positive\n");
    }else if(*pnum<0){
        printf("Number entered is negative\n");
    }else{
        printf("Number entered is zero\n");
    }
    return 0;
}