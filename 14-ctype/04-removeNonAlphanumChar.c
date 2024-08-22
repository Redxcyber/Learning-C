// remove non alphanumeric character from string given by user

#include<stdio.h>
#include<ctype.h>
void main() {
    char str[100], result[100];
    int j=0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i] != '\0'; i++){
        if(isalnum(str[i])){
            result[j++] = str[i];
        }
    }
    result[j++] = '\0';
    printf("Filtered string = %s",result);
}