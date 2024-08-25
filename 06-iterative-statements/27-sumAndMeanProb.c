// write a program to read numbers until -1 encounter. Also calculate sum and mean of all +ve numbers entered and the sum and mean of all -ve numbers entered saparately.

#include<stdio.h>
int main(){
    int num;
    int positive_count=0, negative_count=0, positive_sum=0, negative_sum=0;
    float positive_mean=0.0, negative_mean=0.0;
    printf("Enter n (-1 to stop) : ");
    while(1){
        scanf("%d",&num);
        if(num == -1){
            break;
        }else if(num>=0){
            positive_count++;
            positive_sum += num;
        }else if(num<0){
            negative_count++;
            negative_sum += num;
        }else{
            printf("Error \n");
        }
    }

    // positive_mean = positive_sum/positive_count;
    // negative_mean = negative_sum/negative_count;
    // printf("sum of positive numbers = %d\n",positive_sum);
    // printf("mean of positive numbers = %f\n",positive_mean);
    // printf("sum of negative numbers = %d\n",negative_sum);
    // printf("mean of negative numbers = %f\n",negative_mean);

    // above code will not work as expected 
    //if we enter all +ve term then negative count will be zero all below statement from negative mean calculation gets gets terminated
    //if we enter all -ve term then positive count will be zero all below statement from positive mean calculation gets terminated
    
    //correct code below --> used if statement to find mean only when count>0
    if(positive_count>0){
        positive_mean = positive_sum/positive_count; 
        printf("sum of positive numbers = %d\n",positive_sum);
        printf("mean of positive numbers = %.2f\n",positive_mean);
    }else{
        printf("no positive number entered by user !!\n");
    }
    if(negative_count>0){
        negative_mean = negative_sum/negative_count;
        printf("sum of negative numbers = %d\n",negative_sum);
        printf("mean of negative numbers = %.2f\n",negative_mean);
    }else{
        printf("no negative number entered by user !!\n");
    }
    
}