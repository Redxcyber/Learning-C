//concatenate str1 and str2 and store the result in to new str

#include<stdio.h>
int main(){
    
    //declare str
    char str1[100], str2[100], str3[100];

    //input str1 from user
    printf("Enter first string : ");
    gets(str1);

    //input str2 from user
    printf("Enter second string : ");
    gets(str2);

    int j=0;

    //copy element of first str
    for(int i=0; str1[i] != 0; i++, j++){
        str3[j] = str1[i];
    }

    //copy element of second str
    for(int i=0; str2[i] != 0; i++, j++){
        str3[j] = str2[i];
    }

    //add null terminator to concated str
    str3[j] = '\0';

    //output concated str
    printf("concated string = %s",str3);

    return 0;
}