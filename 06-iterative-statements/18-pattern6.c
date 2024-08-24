/*
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include<stdio.h>
void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
}