#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    //count total digits in number 
    int count=0;
    for(int i=num; i>0; i%10, i/=10){
        // int rem = i%10;
        count++;
    }
    printf("Total number of digits = %d\n",count);

    //sum of first and last digit
    int sum = 0;
    for(int i=1; i<=count; i++){
        int rem = num%10;
        num /= 10;
        if(i==1 || i==count){
            sum += rem;
        }
    }
    printf("sum of first and last digit = %d\n",sum);
  
    return 0;
}