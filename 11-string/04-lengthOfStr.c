// take a string from the user and find the length of the string

#include<stdio.h>
int main(){

    char str[100];
    int count = 0;
    printf("Enter a string : ");
    gets(str);
    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    printf("length = %d",count);

    return 0;
}