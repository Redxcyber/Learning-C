//QUESTION = print position of smallest of n numbers in array

#include<stdio.h>
int main(){
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    int num[size];
    for(int i=0; i<size; i++){
        printf("Enter number %d = ",i+1);
        scanf("%d",&num[i]);
    }
    
    int position=0;
    int smallest = num[0];
    for(int i=0; i<size; i++){
        if(num[i]<smallest){
            smallest = num[i];
            position = i;
        }
    }
    printf("\nSmallest number = %d\n",smallest);
    printf("Position of smallest number = %d\n",position);

    return 0;
}