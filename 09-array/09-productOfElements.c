//product of all the elements of the array

#include<stdio.h>
void main(){
    int i,n,prod=1;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int num[n]; 
    for(i=0; i<n; i++){
        printf("Enter numbers : ");
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++){
        prod *= num[i];
    }
    printf("Product of all numbers = %d",prod);
}