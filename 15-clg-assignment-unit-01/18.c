//reverse of a number 

#include<stdio.h>
int main(){
    int n;
    int rev=0;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=n; i>0; i/=10){
        int digit = i%10;
        rev = rev*10+digit;
    }
    printf("Reverse = %d",rev);
    return 0;
}