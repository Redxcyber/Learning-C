// find if there any duplicate element in the array

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

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(num[i]==num[j]){
                printf("\nYes, it contains duplicate element");
                printf("\nDuplicate element's value = %d",num[i]);
                printf("\nDuplicate element's position = %d and %d\n",i,j);
                break;
            }
        }
    }

    return 0;
}