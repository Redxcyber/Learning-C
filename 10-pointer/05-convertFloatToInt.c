//convert floating point number to integer

#include<stdio.h>
int main(){
    float fnum, *pfnum = &fnum;
    int num, *pnum = &num;
    printf("Enter a floating point number : ");
    scanf("%f",pfnum);
    *pnum = (int)*pfnum;
    printf("Number entered in int format will be = %d",*pnum);
    return 0;
}