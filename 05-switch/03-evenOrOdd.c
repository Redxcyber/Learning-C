#include<stdio.h>
void main(){
    int n,res;
    printf("Enter a number : ");
    scanf("%d",&n);
    res = n%2;
    switch(res){
        case 0: {
            printf("number is even\n");
            break;
        }
        case 1: {
            printf("number is odd\n");
            break;
        }
        default: {
            printf("error !!");
        }
    }
}