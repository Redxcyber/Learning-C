//menu based program to add, subtract, multiply two matrix

#include<stdio.h>
int main(){

    char ch;
    do{
        int r1,r2,c1,c2,option;
        printf("Enter number of rows of first matrix : ");
        scanf("%d",&r1);
        printf("Enter number of columns of first matrix : ");
        scanf("%d",&c1);
        printf("Enter number of rows of second matrix : ");
        scanf("%d",&r2);
        printf("Enter number of columns of second matrix : ");
        scanf("%d",&c2);

        //matrix declaration
        int A[r1][c1], B[r2][c2], sum[r1][c1], subtract[r1][c1], multiply[r1][c2];

        //menu
        printf("\n1. add two matrix\n2. subtract two matrix\n3. multiply two matrix\n4. exit");
        printf("\nChoose option from menu : ");
        scanf("%d",&option);

        if(option==1){
            if(r1==r2 && c1==c2){
                //input element of matrix [A]
                printf("\nenter elements of first matrix ->\n");
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c1; j++){
                        printf("A[%d][%d] : ",i,j);
                        scanf("%d",&A[i][j]);
                    }
                }
                //input element of matrix [B]
                printf("\nenter elements of second matrix ->\n");
                for(int i=0; i<r2; i++){
                    for(int j=0; j<c2; j++){
                        printf("B[%d][%d] : ",i,j);
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
                //add matrix
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c1; j++){
                        sum[i][j] = A[i][j] + B[i][j];
                    }
                }
                //print matrix [sum]
                printf("\nmatrix Sum ->\n");
                for(int i=0; i<r2; i++){
                    for(int j=0; j<c2; j++){
                        printf("%4d",sum[i][j]);
                    }
                    printf("\n");
                }
                // printf("\nDo you want to use this program again [press y for yes]: ");
                // scanf("%c",&ch);
            }else{
                printf("\nWARNING : Order of matrix must be equal\n");
                return 1;
            }

        }else if(option==2){
            if(r1==r2 && c1==c2){
                //input element of matrix [A]
                printf("\nenter elements of first matrix ->\n");
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c1; j++){
                        printf("A[%d][%d] : ",i,j);
                        scanf("%d",&A[i][j]);
                    }
                }
                //input element of matrix [B]
                printf("\nenter elements of second matrix ->\n");
                for(int i=0; i<r2; i++){
                    for(int j=0; j<c2; j++){
                        printf("B[%d][%d] : ",i,j);
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
                //subtract matrix
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c1; j++){
                        subtract[i][j] = A[i][j] - B[i][j];
                    }
                }
                //print matrix [subtract]
                printf("\nmatrix Subtract ->\n");
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c1; j++){
                        printf("%4d",subtract[i][j]);
                    }
                    printf("\n");
                }
                // printf("\nDo you want to use this program again [press y for yes]: ");
                // scanf("%c",&ch);
            }else{
                printf("\nWARNING : Order of matrix must be equal\n");
                return 1;
            }

        }else if(option==3){
            if(c1==r2){
            
                //input element of matrix [A]
                printf("\nenter elements of first matrix ->\n");
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c1; j++){
                        printf("A[%d][%d] : ",i,j);
                        scanf("%d",&A[i][j]);
                    }
                }
                //input element of matrix [B]
                printf("\nenter elements of second matrix ->\n");
                for(int i=0; i<r2; i++){
                    for(int j=0; j<c2; j++){
                        printf("B[%d][%d] : ",i,j);
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
                //matrix multiplication
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c2; j++){
                        for(int k=0; k<c1; k++){
                            multiply[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }

                //print multiply matrix
                printf("\nmatrix Multiply ->\n");
                for(int i=0; i<r1; i++){
                    for(int j=0; j<c2; j++){
                        printf(" %4d ",multiply[i][j]);
                    }
                    printf("\n");
                }

            }else{
                printf("\nWARNING : column of 1st matrix must be equal to row of 2nd matrix\n");
                return 1;
            }

        }else if(option==4){
            printf("\nProgram terminated successfully !!");

        }else{
            printf("\nInvalid input  !!");
        }
        printf("\nDo you want to use program again [y for yes] : ");
        getchar();
        scanf("%c",&ch);

    }while(ch=='y');
    
    return 0;
}