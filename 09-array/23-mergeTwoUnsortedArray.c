//merge two unsorted array 

#include<stdio.h>
int main(){
    
    //taking Array-1 from user
    int size1;
    printf("Enter size of 1st Array  : ");
    scanf("%d",&size1);

    int arr1[size1];
    for(int i=0; i<size1; i++){
        printf("Enter element indexed %d = ",i);
        scanf("%d",&arr1[i]);
    }
    
    //printing Array-1
    printf("\nArray-1 : ");
    for(int i=0; i<size1; i++){
        printf("%d ",arr1[i]);
    }

    //taking Array-2 from user
    int size2;
    printf("\n\nEnter size of 2nd Array : ");
    scanf("%d",&size2);

    int arr2[size2];
    for(int i=0; i<size2; i++){
        printf("Enter element indexed %d = ",i);
        scanf("%d",&arr2[i]);
    }
 
    //printing Array-2
    printf("\nArray-2 : ");
    for(int i=0; i<size2; i++){
        printf("%d ",arr2[i]);
    }

    //mergin unsorted array
    int merged[size1+size2];
    for(int i=0; i<size1; i++){
        merged[i] = arr1[i];
    }

    for(int i=0; i<size2; i++){
        merged[size1+i] = arr2[i];
    }

    //printing Merged Array
    printf("\n\nMerged Array : ");
    for(int i=0; i<size1+size2; i++){
        printf("%d ",merged[i]);
    }

    return 0;
}