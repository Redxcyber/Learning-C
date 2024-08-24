// check if entered char is vowel or not

#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        printf("Entered char is vowel\n");
    }
    else{
        printf("Entered char is not vowel\n");
    }
}