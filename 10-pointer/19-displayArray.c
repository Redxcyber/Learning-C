//display a given array using pointers

#include<stdio.h>
int main(){
    int arr[9] = {4,2,3,4,5,6,7,8,9};
    int *ptr1 = arr, *ptr2 = &arr[8];
    // method-01
    while(ptr1<=ptr2){
        printf("%d ",*ptr1);
        ptr1++;
    }
    //method-02
    int length = ptr2-ptr1+1; // 8+1
    for(int i=0; i<length; i++){
        printf("%d ",*(ptr1+i));
    }
    return 0;
}