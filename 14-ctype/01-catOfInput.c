#include <stdio.h>
#include <ctype.h>
void main() {
    char ch;
    int ascii;
    printf("Enter an input : ");
    scanf("%c",&ch);
    if (isalpha(ch)){
        printf("%c is alpha\n",ch);
    } else if (isdigit(ch)){
        printf("%c is numeric\n",ch);
    } else {
        printf("%c is symbol\n",ch);
    }
}