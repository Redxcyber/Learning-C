//mean of n numbers using array and pointers

#include<stdio.h>
int main(){
    //input size of array
    int n, *pn=&n;
    printf("Enter size of array : ");
    scanf("%d",pn);

    //array declaration
    int arr[n], *parr=arr;
    
    //input elements of array
    printf("Enter elements of array ->\n");
    for(int i=0; i<*pn; i++){
        scanf("%d",parr+i);
    }

    //output array
    printf("arr[%d] : ",n);
    for(int i=0; i<*pn; i++){
        printf("%d ",*(parr+i));
    }
    printf("\n");
    
    //sum of all elemets of array
    int sum=0, *psum=&sum;
    for(int i=0; i<*pn; i++){
        *psum += *(parr+i);
    }
    
    //output sum
    printf("Sum = %d\n",*psum);

    //calculate mean
    float mean=0.0, *pmean=&mean;
    mean = (float)*psum/(*pn);
    
    //output mean
    printf("Mean = %.2f\n",*pmean);
    return 0;
}