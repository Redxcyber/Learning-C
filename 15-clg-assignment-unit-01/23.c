//search a particular element in an array

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements of array ->\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("arr[%d] : ",n);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int target;
    printf("Enter element that you want to search : ");
    scanf("%d",&target);


    for(int i=0; i<n; i++){
        if(arr[i]==target){
            printf("Element %d is found on index %d\n",target,i);
            break;
        }
    }

    return 0;
}