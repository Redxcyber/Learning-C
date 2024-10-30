//print all armstrong numbers from 1 to 100

#include<stdio.h>
#include<math.h>
int main(){
    for(int i=1; i<=100; i++){
        int counter=0;
        int sum=0;
        for(int j=i; j>0; j/=10){
            counter++;
        }
        for(int k=i; k>0; k/=10){
            int digit = k%10;
            int power = pow(digit, counter);
            sum = sum + power;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}