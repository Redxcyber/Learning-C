// interchange maximum and minimum element in an array

#include<stdio.h>
int main(){
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);

    int num[size];
    for(int i=0; i<size; i++){
        printf("Enter number %d = ",i+1);
        scanf("%d",&num[i]);
    }
    
    printf("\nArray before : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    int min = num[0];
    int min_pos = 0;
    for(int i=0; i<size; i++){
        if(num[i]<min){
            min = num[i]; //imp to find min_pose
            min_pos = i;
        }
    }

    int max = num[0];
    int max_pos = 0;
    for(int i=0; i<size; i++){
        if(num[i]>max){
            max = num[i]; //imp to find max_pos
            max_pos = i;
        }
    }
    printf("\nminimum element = %d",min);
    printf("\nminimum element's position = %d",min_pos);
    printf("\nmaximum element = %d",max);
    printf("\nmaximum element's position = %d",max_pos);

    int temp;
    temp = num[min_pos];
    num[min_pos] = num[max_pos];
    num[max_pos] = temp;

    printf("\nArray after  : ");
    for(int i=0; i<size; i++){
        printf("%d ",num[i]);
    }

    return 0;
}