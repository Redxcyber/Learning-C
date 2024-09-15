//delete an element from the middle of the array

#include<stdio.h>
int main(){
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    int num[size];
    for(int i=0; i<size; i++){
        printf("Enter element indexed %d = ",i);
        scanf("%d",&num[i]);
    }
 
    printf("\nArray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }


    int element;
    printf("\n\nWhich element you want to delete : ");
    scanf("%d",&element);

    int pos;
    //finding position of the element
    for(int i=0; i<size; i++){
        if(num[i]==element){
            pos = i;
            break;
        }
    }

    //deleting element from middle of the array
    for(int i=pos; i<size-1; i++){
        num[i] = num[i+1];
    }

    size--;
    printf("Array after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }
    printf("\n\n");

    return 0;
}