//print armstrong number from 1 to 100

#include<stdio.h>
#include<math.h>
int main(){
    //loop pass number from 1 to 100
    for(int i=1; i<=100; i++){
        //loop count number of digits
        int counter=0;
        for(int j=i; j>0; j/=10){
            counter++;
        }
        //check armstrong or not
        int k;
        int totalSum=0;
        for(k=i; k>0; k/=10){
            int digit = k%10;
            int power = pow(digit, counter);
            totalSum += power;
        }
        if(totalSum==i) printf("%d ",i);
    }
    return 0;
}