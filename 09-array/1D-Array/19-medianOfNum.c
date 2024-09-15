//take floating point values from user and find median of values

#include<stdio.h>
int main(){
    
    int size;
    printf("Enter no of value : ");
    scanf("%d",&size);

    float value[size];
    printf("\nValues entered must be in ascending order :\n");
    for(int i=0; i<size; i++){
        printf("Enter value %d = ",i+1);
        scanf("%f",&value[i]);
    }

    float median=0;
    if(size%2==0){
        //Median = value at (n/2) + value at (n/2+1)
        //index strt from 0, we will get Nth value at (N-1)th place
        median = (value[size/2 - 1] + value[size/2])/2.0;
    }else{
        //median = value at (n/2+1)
        //index strt from 0, we will get Nth value at (N-1)th place
        median = value[size/2];
    }

    printf("\nMedian of values = %.2f",median);
    
    return 0;
}