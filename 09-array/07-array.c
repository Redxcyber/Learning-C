#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[4]);

    printf("%u\n",&arr[0]); // address of first element of the array
    printf("%p\n",&arr[0]); // correct address of first element of the array
    printf("%p\n",&arr[1]); // correct address of first element of the array
    printf("%p\n",&arr[2]); // correct address of first element of the array
    printf("%p\n",&arr[3]); // correct address of first element of the array
    printf("%p\n",&arr[4]); // correct address of first element of the array


    // arr[1] = 20; //update value of the array 
    // arr[4] = 50;
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[4]);

    // printf("%d",arr[6]);
    // printf("%d",arr[-3]);  //it will not give any error  but will print garbage value


    //another method to initialise an array
    // arr[0] = 12;
    // arr[1] = 23;
    // arr[2] = 21;
    // arr[3] = 21;
    // arr[4] = 2;
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[4]);


    //initialise array using loop
    // printf("Enter numbers that you want to enter in an array : ");
    // for(int i=0; i<=4; i++){
    //     scanf("%d",&arr[i]);
    // }
    // printf("-----------\n");
    // for(int i=0; i<=4; i++){
    //     printf("%d\n",arr[i]);
    // }

    //initialise array using loop
    // for(int i=0; i<=4; i++){
    //     printf("Enter element number %d = ",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0; i<=4; i++){
    //     printf("%d ",arr[i]);
    // }




























    return 0;
}