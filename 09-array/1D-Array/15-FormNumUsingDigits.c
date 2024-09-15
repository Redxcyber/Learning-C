//form a number using the digit entered by the user

#include<stdio.h>
int main(){
    
    int numOfDigits;
    printf("Enter number of digit : ");
    scanf("%d",&numOfDigits);

    int digit[numOfDigits];
    for(int i=0; i<numOfDigits; i++){
        printf("Enter digit %d = ",i+1);
        scanf("%d",&digit[i]);
    }

    int num = 0;
    int place = 1;
    for(int i=0; i<numOfDigits; i++){
        num = num + digit[i] * place;
        place *= 10;
    }

    printf("\nnumber formed = %d",num);

    return 0;
}