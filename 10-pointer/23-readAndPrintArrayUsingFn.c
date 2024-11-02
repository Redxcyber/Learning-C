//read and print an array using fn and pointer, also find smallest element and its position

#include<stdio.h>
void readArray(int *arr, int n){
    printf("Enter elements of array ->\n");
    for(int i=0; i<n; i++){
        scanf("%d",arr+i);
    }
}
void printArray(int *arr, int n){
    printf("arr[%d] : ",n);
    for(int i=0; i<n; i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
void smallest(int *arr, int n, int *pmin, int *ppos){
    *pmin = *arr;  //*min = arr[0];
    for(int i=0; i<n; i++){
        if(*(arr+i)<*pmin){  //arr[i]<*min
            *pmin = *(arr+i);  //*min = arr[i];
            *ppos = i;
        }
    }
}
int main(){
    //size of array
    int n, *pn=&n;
    printf("Enter size of the array : ");
    scanf("%d",pn);

    //array declaration
    int arr[n];

    //input array elements
    readArray(arr,n);

    //output array
    printArray(arr,n);

    //smallest element and its position
    int min, pos=0;
    smallest(arr,n,&min,&pos);
    
    //output smallest element and its position
    printf("Smallest element = %d\n",min);
    printf("Position of smallest element = %d\n",pos);

    return 0;
}