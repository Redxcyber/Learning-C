//read char using pointer variable until * entered, if char is in uppercase print in lowercase and viceversa also count no of uppercase and lowercase letters entered

#include<stdio.h>
int main(){
    char ch, *pch = &ch;
    int upper=0, lower=0;
    do{
        printf("Enter a alphabet : ");
        scanf(" %c",pch);
        if(*pch>='A' && *pch<='Z'){
            printf("%c\n",*pch+32);
            upper++;
        }else if(*pch>='a' && *pch<='z'){
            printf("%c\n",*pch-32);
            lower++;
        }
    }while(*pch != '*');
    printf("uppercase letters = %d\nlowercase letters = %d",upper,lower);    
    return 0;
}

