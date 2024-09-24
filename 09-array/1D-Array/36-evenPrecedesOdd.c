//arrange array in such a way that even number precedes odd numbers

#include<stdio.h>
int main(){
    int size;
    int duplicates=0;
    printf("enter the size of array : ");
    scanf("%d",&size);
    
    //array declaration
    int num[size];
    int new[size];

    //input array elemnts
    printf("\nenter elements of the array ->\n");
    for(int i=0; i<size; i++){
        printf("num[%d] : ",i);
        scanf("%d",&num[i]);
    }

    //print original array
    printf("\narray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    //reorder even and odd element
    int oddIndex = 0;
    int evenIndex = size-1;
    for(int i=0; i<size; i++){
        if(num[i]%2 != 0){
            new[oddIndex] = num[i];
            oddIndex++;
        }else{
            new[evenIndex] = num[i];
            evenIndex--;
        }
    }

    //print new array
    printf("\narray after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",new[i]);
    }
    return 0;
}