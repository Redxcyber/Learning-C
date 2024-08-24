// number of digits in a number entered
// must check ctype -> 05-digitOrNot.c before checking this program to get logic
// is digit(num) will not run as expected , so code will also not work as expected

#include<stdio.h>
#include<ctype.h>
void main(){
    int num,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    // if(isdigit(num)){
        // if(num==0){
        //     printf("number of digit = 1");
        // } else {
        //     if(num<0) {
        //         num = -num;
        //     }
        //     for(; num>0; num /= 10){
        //         count++;
        //     }
        //     printf("number of digits = %d",count);
        // }
        // printf("yes");
    // } else {
        // printf("Enter valid number !!");
    // }

    if(num==0){
            printf("number of digit = 1");
    } else {
        if(num<0) {              // problem : if i/p = letters it shows no of digit = 1
            num = -num;          // how can we solve this problem ??
        }
        for(; num>0; num /= 10){
            count++;
        }
        printf("number of digits = %d",count);
    }
}