#include<stdio.h>
int main(){
    int num;
    printf("\nEnter number upto which you want to print multiplication table : ");
    scanf("%d",&num);
    
    for(int n=1; n<=10; n++){
        for(int i=2; i<=num; i++){
            printf("%4d |",n*i);
        }
        printf("\n");
    }
    return 0;
}