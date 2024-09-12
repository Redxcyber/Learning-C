//merge two sorted array 

#include<stdio.h>
int main(){
    
    //taking Array-1 from user
    int size1;
    printf("Enter size of 1st Sorted Array  : ");
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
    printf("\n\nEnter size of 2nd Sorted Array : ");
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

    //merging sorted array
    int merged[size1+size2];
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            merged[k++] = arr1[i++];
        }else{
            merged[k++] = arr2[j++];
        }
    }


    //if elements of array-2 are over and array-1 has element left then copy remaining element of array-1
    while(i<size1){
        merged[k++] = arr1[i++];
    }

    //if elements of array-1 are over and array-2 has element left then copy remaining element of array-2
    while(j<size2){
        merged[k++] = arr2[j++];
    }

    //printing Merged Array
    printf("\n\nMerged-Array : ");
    for(int i=0; i<size1+size2; i++){
        printf("%d ",merged[i]);
    }

    return 0;
}