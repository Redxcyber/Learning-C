//take a char from user print char in uppercase and print ascii value of char too using pointers

#include<stdio.h>
int main(){
    char ch, *pch = &ch;
    printf("Enter a lowercase charcater : ");
    scanf("%c",pch);
    printf("Character in uppercase = %c\n",*pch-32);
    printf("ASCII value of %c = %d",*pch, *pch);
    return 0;
}