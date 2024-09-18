//delete duplicate element from array

#include<stdio.h>
int main(){

    //taking size of array from user
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    //array declaration
    int num[size];

    //taking array element from the user
    printf("\nEnter elements of the array ->\n");
    for(int i=0; i<size; i++){
        printf("num[%d] : ",i);
        scanf("%d",&num[i]);
    }

    //printing array entered by user
    printf("\nArray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    //deleting duplicate elements
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(num[i]==num[j]){
                for(int k=j; k<size-1; k++){
                    num[k] = num[k+1];
                }
                size--;
                j--;
            }
        }
    }

    //printing array after deleting duplicate element
    printf("\nArray after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }
    printf("\n\n");
    
    return 0;
}