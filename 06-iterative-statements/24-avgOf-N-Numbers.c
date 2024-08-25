// find avg of numbers entered by user and stop taking number from user if he enters -1

#include<stdio.h>
int main(){
    int num,deno=0,sum=0;
    float avg=0.0;
    printf("Enter any number (-1 to stop): ");
    while(1){
        scanf("%d",&num);
        if(num == -1){
            break;
        }else{
            sum += num;
        }
        deno++;
    }
    avg = sum/deno;
    printf("sum = %d\n",sum);
    printf("avg = %.2f\n",avg);
    return 0;
}