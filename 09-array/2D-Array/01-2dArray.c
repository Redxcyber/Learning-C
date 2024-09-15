#include<stdio.h>
int main(){
    
    //2d array declaration
    int arr1[2][3];

    //2d array initialization
    int arr2[2][3] = {1,2,3,4,5,6};

    //initialization of 2d array is done ny row by row. the above statement can be written as
    int arr3[2][3] = {{1,2,3},{4,5,6}};

    //just like 1d array if array is completely initialized you can ommit size of the array
    //you can do same here but only size of first dimension is ommitable
    int arr4[][3] = {{1,2,3},{4,5,6}};

    //to initialize all element of 2d array to zero
    int arr5[2][3] = {0};

    //if some values of 2d array are missing, they will get initialized to zero, here all elements of the 2nd row will be initialized to zero
    int arr6[2][3] = {{1,2,3}};

    //individual element of 2d array can be initialised using assignment op
    int arr7[2][2];
    arr7[0][0] = 1;
    arr7[0][1] = arr7[0][0] + 2;
    arr7[1][0] = 3;
    arr7[1][1] = 6;

    //element of 2d array can be initialized by taking values from the user
    int arr8[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("arr8[%d][%d] : ",i,j);
            scanf("%d",&arr8[i][j]);
        }
    }





    return 0;
}