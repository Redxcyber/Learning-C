//write a program to read a  two matrix of order m*n and then add two matrix and store it in third matrix of order m*n

#include<stdio.h>
int main(){

    //taking rows and column from the user
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of column : ");
    scanf("%d",&n);

    //matrix declaration
    int A[m][n];
    int B[m][n];
    

    //read first matrix
    printf("\nEnter elements of the first matrix->\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter A[%d%d] : ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
        printf("\n\n");
    }

    //read second matrix
    printf("\nEnter elements of the second matrix->\n");
    for(int i=0; i<m; i++){ 
        for(int j=0; j<n; j++){
            printf("Enter B[%d%d] : ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
        printf("\n\n");
    }

    //print matrix [A]
    printf("\nMatrix [A] ->\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }

    //print matrix [B]
    printf("\nMatrix [B] ->\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%4d",B[i][j]);
        }
        printf("\n");
    }

    //add matrix[A] and matrix[B]
    int C[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    //printing matrix[C]
    printf("\nResultant matrix->\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%4d",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}