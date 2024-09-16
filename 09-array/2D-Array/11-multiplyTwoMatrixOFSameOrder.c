//multiply two square matrix of same order (special case)

#include <stdio.h>

int main() {
    int n;

    // taking order of matrix
    printf("Enter the order of the square matrices: ");
    scanf("%d", &n);

    //declaring matrices
    int A[n][n], B[n][n], result[n][n];

    //taking element of matricx [A]
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] : ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    //taking element of matricx [B]
    printf("\nEnter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d] : ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }

    //print matrix [A]
    printf("\nmatrix [A] ->\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }

    //print matrix [B]
    printf("\nmatrix [B] ->\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d",B[i][j]);
        }
        printf("\n");
    }

    // Initialize the result matrix to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //print result matrix
    printf("\nResultant matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}