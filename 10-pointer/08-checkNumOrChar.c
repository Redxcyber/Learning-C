//check if input is a digit or char, if it's char then check if it is in lowercase or uppercase

#include<stdio.h>
int main(){
    char ch, *pch = &ch;
    printf("Enter any character or digit : ");
    scanf("%c",pch);
    if(*pch>='A' && *pch<='Z'){
        printf("Uppercase char was entered\n");
    }else if(*pch>='a' && *pch<='z'){
        printf("Lowercase char was entered\n");
    }else{
        printf("Digit was entered\n");
    }
    return 0;
}