//write a program to read a matrix of any order and print it too

#include<stdio.h>
int main(){

    //taking rows and column from the user
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of column : ");
    scanf("%d",&n);

    //matrix declaration
    int matrix[m][n];
    
    //read matrix
    printf("\nEnter elements of the matrix\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter A[%d%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n\n");
    }


    //print matrix
    printf("\nRepresentation of matrix\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}