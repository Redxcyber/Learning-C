//fing largest of n numbers using array and pointer, also display its position

#include<stdio.h>
int main(){
    //size of array
    int n, *pn=&n;
    printf("Enter how many numbers you wanna compare : ");
    scanf("%d",pn);

    //array declaration
    int arr[n], *parr=arr;

    //input array elements
    printf("Enter all numbers ->\n");
    for(int i=0; i<*pn; i++){
        scanf("%d",parr+i);
    }

    //largest element
    int max=arr[0], *pmax=&max;
    int pos=0, *ppos=&pos;
    for(int i=0; i<*pn; i++){
        if(*(parr+i)>(*pmax)){
            *pmax = *(parr+i);
            *ppos = i;
        }
    }

    //output array representation
    printf("arr[%d] : ",*pn);
    for(int i=0; i<*pn; i++){
        printf("%d ",*(parr+i));
    }
    printf("\n");

    //output largest number and its position
    printf("Largest number = %d\n",*pmax);
    printf("Position of largest number = %d",*ppos);
    
    return 0;
}