// sum of even number between 1 and n

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        if(i%2==0){
            sum += i;
        }
    }
    printf("sum = %d",sum);
}