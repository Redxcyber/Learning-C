//convert string to uppercase using inbuilt fn

#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    gets(str);
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = toupper(str[i]);
        }
    }
    printf("uppercase = %s",str);
    return 0;
}