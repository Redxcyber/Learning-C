//take element of 2d array from the user then print element in row by row formate

#include<stdio.h>
int main(){
    //taking no of row from user
    int row;
    printf("Enter number of row : ");
    scanf("%d",&row);

    //taking no of column from user
    int column;
    printf("Enter number of column : ");
    scanf("%d",&column);

    //declaring 2d array
    int arr[row][column];
    
    //taking values from the user
    printf("\nEnter elements of 2D-Array\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    //printing 2d array
    printf("\n2D-Array :\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    
    
    
    
    
    
    
    
    
    return 0;
}