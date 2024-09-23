/*

    * * * * *
    * * * *
    * * *
    * *
    *
 
*/

#include<stdio.h>
int main(){
    int row;
    printf("Enter row : ");
    scanf("%d",&row);

    //method-1
    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }


    //method-2
    for(int i=1; i<=row; i++){
        for(int j=i; j<=row; j++){
            printf("* ");
        }
        printf("\n");
    }
   

    //method-3
    for(int i=0; i<row; i++){
        for(int j=0; j<row-i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}