// number of character in a string

#include<stdio.h>
void main(){
    int count=0;
    char str[100];
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    if(str[count-1]=='\n'){
        count--;
    }
    printf("number of char = %d",count);
}