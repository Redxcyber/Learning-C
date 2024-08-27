#include<stdio.h>
int main(){
    int num, isPrime=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            isPrime = 1;
            break;
        }
    }
    if(isPrime==1){
            printf("%d is composite",num);
    }else{
        printf("%d is prime",num);
    }
    return 0;
}