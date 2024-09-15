//find second largest no from an array

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
    
    int max1 = num[0];
    for(int i=1; i<size; i++){
        if(max1<num[i]){
            max1 = num[i];
        }
    }

    int min = num[0];
    for(int i=1; i<size; i++){
        if(min>num[i]){
            min = num[i];
        }
    }

    int max2 = min;
    for(int i=0; i<size; i++){
        if(max2<num[i] && num[i]<max1 ){
            max2 = num[i];
        }
    }

    printf("\nfirst largest number = %d",max1);
    printf("\nsecond largest number = %d",max2);

    return 0;
}