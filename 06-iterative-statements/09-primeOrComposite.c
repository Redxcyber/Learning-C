#include<stdio.h>
int main(){
    int num, flag=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==1){
            printf("%d is composite",num);
    }else{
        printf("%d is prime",num);
    }
    return 0;
}