/*
     1
    123
   12345
  1234567
 123456789
 
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
            printf("%d",j);
        }
        printf("\n");
    }

    //method-2
    // for(int i = 1; i <= row; i++) {
    //     for(int space = 1; space <= row - i; space++) {
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= (2 * i - 1); j++) {
    //         printf("%d",j); 
    //     }
    //     printf("\n");
    // }

    return 0;
}