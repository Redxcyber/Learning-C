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

    // print transpose of matrix directly from original matrix
    printf("\nTranspose of matrix->\n");

    //method-1
    // for(int j=0; j<n; j++){
    //     for(int i=0; i<m; i++){
    //         printf("%4d",matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    //method-2
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%4d",matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}