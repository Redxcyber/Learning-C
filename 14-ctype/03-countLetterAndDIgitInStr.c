//count no. of letter, digit and symbol in a string taken from user

#include<stdio.h>
#include<ctype.h>
void main() {
    char str[100];
    int i, letterCount=0, digitCount=0, symbolCount=0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0'; i++){
        if(isdigit(str[i])){
            digitCount += 1;       
        } else if(isalpha(str[i])){
            letterCount += 1;
        } else if (ispunct(str[i])){
            symbolCount += 1;
        }
    }
    printf("number of digits = %d\n",digitCount);
    printf("number of letters = %d\n",letterCount);
    printf("number of symbols = %d\n",symbolCount);
}



//<------------------------METHOD 2-------------------------------->


/*
#include <stdio.h>

int main() {
    char str[100];
    int i, alphabets, digits, special;

    alphabets = digits = special = i = 0;

    printf("\nPlease enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
        i++;
    }

    printf("\nNumber of alphabets in this string: %d", alphabets);
    printf("\nNumber of digits in this string: %d", digits);
    printf("\nNumber of special characters in this string: %d\n", special);

    return 0;
}
*/


