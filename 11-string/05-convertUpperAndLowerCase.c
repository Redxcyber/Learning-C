//convert string to uppercasse and to lowercase

#include<stdio.h>
int main(){
    
    //input str from user
    char str[100];
    printf("Enter a string : ");
    gets(str);

    //declaring str
    char upperStr[100], lowerStr[100];
    int i,j;

    //convert to uppercase
    for(i=0; str[i] != '\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            upperStr[i] = str[i] - 32;
        }else{
            upperStr[i] = str[i];
        }
    }
    upperStr[i] = '\0'; //null terminator for upperStr
    printf("Uppercasse : %s\n",upperStr);

    //convert to lowercase
    for(j=0; str[j] != '\0'; j++){
        if(str[j]>='A' && str[j]<='Z'){
            lowerStr[j] = str[j] + 32;
        }else{
            lowerStr[j] = str[j];
        }
    }
    lowerStr[j] = '\0'; //null terminator for lowerStr
    printf("Lowercasse : %s",lowerStr);
    return 0;
}