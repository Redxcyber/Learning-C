/*
        *
       ***
      *****
     *******
    *********

*/

#include<stdio.h>
int main(){
    int row;
    printf("Enter row : ");
    scanf("%d",&row);

    //method-1
    for(int i=1; i<=row; i++){
        for(int space=i; space<=row; space++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    //method-2
    for(int i = 1; i <= row; i++) {
        for(int space = 1; space <= row - i; space++) {
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("*"); 
        }
        printf("\n");
    }

    return 0;
}