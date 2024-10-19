//extract substring from the right of the str

#include<stdio.h>
int main(){
    char str[100], subStr[100];

    //input str from user
    printf("Enter a string : ");
    gets(str);

    //input no of letters to be extracted
    int letters;
    printf("Enter number of letters to be extracted from right : ");
    scanf("%d",&letters);

    //length of str
    int length=0;
    for(int i=0; str[i] != '\0'; i++){
        length++;
    }
    
    //extract sub string
    int j=0;
    for(int i=length-letters; str[i] != '\0'; i++, j++){
        subStr[j] = str[i];
    }

    //add null terminator at the end of sub string
    subStr[j] = '\0';

    //output sub string
    printf("sub-string extracted : %s\n",subStr);

    return 0;
}