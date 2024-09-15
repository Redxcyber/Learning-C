// In a small company there are 5 salesmen. Each salesman is supposed to sell 3 products. Write a program using 2d array to
// (i) = print total sales by each salesman
// (ii) = print total sale of each product

#include<stdio.h>
int main(){
    int sales[5][3];

    //taking sales from the user
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Enter sale of product %d by salesman %d : ",j+1, i+1);
            scanf("%d",&sales[i][j]);
        }
        printf("\n--------------------------------------------------------------\n");
    }

    //printing sales by each salesman
    printf("2d-Array representing salesman(row) and sales of products(column)\n");
    for(int i=0; i<5; i++){
        // printf("Salesman-%d : ",i+1);
        for(int j=0; j<3; j++){
            printf("%4d ",sales[i][j]);
        }
        printf("\n");
    }
    printf("\n--------------------------------------------------------------\n");

    // (i) = print total sales by each salesman
    for(int i=0; i<5; i++){
        int totalSale = 0;
        printf("Total sales of Salesman-%d : ",i+1);
        for(int j=0; j<3; j++){
            totalSale += sales[i][j];
        }
        printf("%d\n",totalSale);
    }
    printf("\n--------------------------------------------------------------\n");

    // (ii) = print total sale of each product
    for(int j=0; j<3; j++){
        int totalSale = 0;
        printf("Total sales of product-%d : ",j+1);
        for(int i=0; i<5; i++){
            totalSale += sales[i][j];
        }
        printf("%d\n",totalSale);
    }
    printf("\n");





















    return 0;
}