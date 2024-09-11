//arrange array in ascending order

#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    int num[size];
    for(int i=0; i<size; i++){
        printf("Enter element indexed %d = ",i);
        scanf("%d",&num[i]);
    }

    printf("\nArray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    //bubble sort algorithm
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(num[j]>num[j+1]){
                //method-1 (pass by value will not work, pass by reference will)
                swap(&num[j], &num[j+1]); 

                //method-2
                // int temp;
                // temp = num[j];
                // num[j] = num[j+1];
                // num[j+1] = temp;
            }
        }
    }

    printf("\nArray after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    return 0;
}