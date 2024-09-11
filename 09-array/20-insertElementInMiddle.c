// take an array from user and then take a number and position from user and insert that number to position given by the user and then print the array

#include<stdio.h>
int main(){
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    int num[size+1];
    for(int i=0; i<size; i++){
        printf("Enter element indexed %d = ",i);
        scanf("%d",&num[i]);
    }

    printf("\nArray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    int element,pos;
    printf("\n\nEnter new element that you want to insert : ");
    scanf("%d",&element);
    printf("Enter position of new element : ");
    scanf("%d",&pos);

    //method-1
    for(int i=size; i>pos; i--){
        num[i] = num[i-1];
    }

    //method-2
    // for(int i=size-1; i>=pos; i--){
    //     num[i+1] = num[i];
    // }

    num[pos] = element;
    size++; //incremented beacuase array after loop will iterate at one more element

    printf("\nArray after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    return 0;
}