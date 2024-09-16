//write a program to read a matrix of any order and then transpose it

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
    printf("\nEnter elements of the matrix->\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter A[%d%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n\n");
    }


    //print original matrix
    printf("\nMatrix->\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }


    //create transpose matrix from original matrix
    int transpose_matrix[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transpose_matrix[i][j] = matrix[j][i];
        }
    }


    //printing transposed matrix
    printf("\nTransposed Matrix->\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%4d",transpose_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}