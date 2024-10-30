//min and max element in array

#include<stdio.h>
int main(){
    int arr[6] = {2,3,4,5,0,1};
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<6; i++){
        if(arr[i]<min) min = arr[i];
        
        if(arr[i]>max) max = arr[i];
    }
    printf("minimum element = %d\n",min);
    printf("maximum element = %d\n",max);
    return 0;
}