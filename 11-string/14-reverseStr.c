//take a string from user reverse it and store it in new string variable 

#include<stdio.h>
int main(){
    char str[100], revStr[100];

    //input str from user
    printf("Enter a string : ");
    gets(str);

    //find length of original str
    int length=0;
    for(int i=0; str[i] != '\0'; i++){
        length++;
    }

    //reverse str
    int j=0;
    for(int i=length-1; i>=0; i--, j++){
        revStr[j] = str[i];
    }

    //add null terminator at the end of reversed str
    revStr[j] = '\0';

    //print reverse str
    printf("original string : %s\n",str);
    printf("reverse string : %s",revStr);

    return 0;
}