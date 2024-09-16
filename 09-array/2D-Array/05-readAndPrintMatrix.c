//write a program to read a 3 * 3 matrix and print it too

#include<stdio.h>
int main(){

    //matrix declaration
    int matrix[3][3];
    
    //read matrix
    printf("\nEnter elements of the matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter A[%d%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n\n");
    }


    //print matrix
    printf("\nRepresenting matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}