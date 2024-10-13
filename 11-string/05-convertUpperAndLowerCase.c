//convert string to uppercasse and to lowercase and store result in new str

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

    //null terminator for upperStr
    upperStr[i] = '\0'; 
    printf("Uppercasse : %s\n",upperStr);

    //convert to lowercase
    for(j=0; str[j] != '\0'; j++){
        if(str[j]>='A' && str[j]<='Z'){
            lowerStr[j] = str[j] + 32;
        }else{
            lowerStr[j] = str[j];
        }
    }

    //null terminator for lowerStr
    lowerStr[j] = '\0'; 
    printf("Lowercasse : %s",lowerStr);
    
    return 0;
}