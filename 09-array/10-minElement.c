//minimum element of the array

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum element of array = %d",min);
    return 0;
}