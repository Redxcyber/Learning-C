#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("number is not prime\n");
            return 0;
        }
    }
    printf("number is prime\n");
    return 0;
}