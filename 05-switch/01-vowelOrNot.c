// check if entered char is vowel or not

#include<stdio.h>
void main(){
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    switch(ch){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        {
            printf("vowel\n");
            break;
        }
        default: printf("not vowel\n"); 
    }
}