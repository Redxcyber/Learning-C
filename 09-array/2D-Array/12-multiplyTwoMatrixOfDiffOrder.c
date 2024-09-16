//multiply two rectangul matrix of different order (general case)

#include<stdio.h>
int main(){
    
    //taking order of matrix [A]
    int r1,c1;
    printf("No. of rows in first matrix : ");
    scanf("%d",&r1);
    printf("No. of columns in first matrix : ");
    scanf("%d",&c1);

    //taking order of matrix [B]
    int r2,c2;
    printf("\n");
    printf("No. of rows in second matrix : ");
    scanf("%d",&r2);
    printf("No. of columns in second matrix : ");
    scanf("%d",&c2);

    if(c1==r2){
        
        //matrices declaration
        int A[r1][c1], B[r2][c2], result[r1][c2];


        //read element of matrix [A]
        printf("\nEnter elements of matrix [A]\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                printf("A[%d][%d] : ",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
        }


        //read element of matrix [B]
        printf("\nEnter elements of matrix [B]\n");
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                printf("B[%d][%d] : ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
        }


        //print matrix [A]
        printf("\nmatrix [A] ->\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                printf("%4d",A[i][j]);
            }
            printf("\n");
        }


        //print matrix [B]
        printf("\nmatrix [B] ->\n");
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                printf("%4d",B[i][j]);
            }
            printf("\n");
        }


        //initialise result matric with zero
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                result[i][j] = 0;
            }
        }


        //matrix multiplication
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<c1; k++){
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }


        //print result matrix
        printf("\nresultant matrix ->\n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                printf(" %4d ",result[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }else{
        printf("\nERROR : No. of column of first matrix must be equal to no. of rows of second matrix");
    }

    return 0;
}