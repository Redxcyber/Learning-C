//interchange the max and min number in an array using function
//change in fn to interchange to max and min element

#include<stdio.h>

//fn to input array from user
void inputArray(int num[], int size){
    for(int i=0; i<size; i++){
        printf("Enter element indexed %d : ",i);
        scanf("%d",&num[i]);
    }
}

//fn to output array from user
void outputArray(int num[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

//fn to interchange max and min element of array (using indices of max and min)
void interchangeMaxMin(int num[], int size){
    int max = num[0];
    int maxIndex = 0;
    int min = num[0];
    int minIndex = 0;
    for(int i=1; i<size; i++){
        if(num[i]>max){
            max = num[i];
            maxIndex = i;
        }
        else if(num[i]<min){
            min = num[i];
            minIndex = i;
        }
    }

    // printf("max : %d\n",max);
    // printf("min : %d\n",min);
    int temp = num[maxIndex];
    num[maxIndex] = num[minIndex];
    num[minIndex] = temp;
}



int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);

    //array declaration
    int num[size];

    //taking array from user
    inputArray(num, size);

    //printing array before any changes
    printf("array-before : ");
    outputArray(num, size);

    //interchange max and min element 
    interchangeMaxMin(num, size);

    //printing array after changes
    printf("array-after  : ");
    outputArray(num, size);
    
    return 0;
}