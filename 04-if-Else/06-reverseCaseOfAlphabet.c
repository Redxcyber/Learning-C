// write a program to take a character from the user. If character is in uppercase change it to lowercase and vice-versa

#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("Entered character is in uppercase\n");
        printf("In lowercase it will be === %c", (ch+32));
    }
    else {
        printf("Entered character is in lowercase\n");
        printf("In uppercase it will be === %c", (ch-32));
    }
}

