// given an array of integers, change the value of all odd indexed element to its second multiple and increment all even indexed value by 10

#include<stdio.h>
int main(){
    int size; 
    printf("enter size of array : ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter element indexed %d = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<size; i++){
        if(i%2==0){
            arr[i] += 10; 
        }else if(i%2 != 0){
            arr[i] *= 2;
        }else{
            printf("Something went wrong\n");
        }
    \
    n
    printf("\nNew Array : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}