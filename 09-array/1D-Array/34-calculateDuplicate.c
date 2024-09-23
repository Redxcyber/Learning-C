//calculate number of duplicate element in array

#include<stdio.h>
int main(){
    int size;
    int duplicates=0;
    printf("enter the size of array : ");
    scanf("%d",&size);
    
    //array declaration
    int num[size];

    //input array elemnts
    printf("\nenter elements of the array ->\n");
    for(int i=0; i<size; i++){
        printf("num[%d] : ",i);
        scanf("%d",&num[i]);
    }

    //print original array
    printf("\narray : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    //calculate number of duplicates
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(num[j]==num[i]){
                duplicates++;
                break;
            }
        }
    }

    //print number of duplicates
    printf("\nnumber of duplicates : %d\n\n",duplicates);

    return 0;
}