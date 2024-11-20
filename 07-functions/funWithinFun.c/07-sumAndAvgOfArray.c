//use one fn to find sum of array and another to find avg of array by calling first fn

#include<stdio.h>
//fn to calculate sum of array
int sum_of_array(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
//fn to calculate avg of array
float avg_of_array(int arr[], int n){
    float avg = (float)sum_of_array(arr,n)/n;
    return avg;
}
int main(){
    int n;
    printf("Enter number of element in array : ");
    scanf("%d",&n);

    //array declaration
    int arr[n];

    //input array elements
    printf("Enter elements of the array ->\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //fn call
    float avg = avg_of_array(arr,n);
    printf("Average of array = %.2f\n",avg);
    return 0;
}