//extract substring from the middle of the str using function

#include<stdio.h>
void extractStr(char str[], char subStr[], int pos1, int pos2){
    int j=0;
    for(int i=pos1-1; i<pos2 && str[i] != '\0'; i++, j++){
        subStr[j] = str[i];
    }

    //add null terminator at the end of sub string
    subStr[j] = '\0';
}
int main(){
    char str[100], subStr[100];

    //input str from user
    printf("Enter a string : ");
    gets(str);

    //input positions
    int pos1, pos2;
    printf("Enter position of first and last letter {counting start from 1} : ");
    scanf("%d %d",&pos1, &pos2);
    
    //extract sub string
    extractStr(str, subStr, pos1, pos2);

    //output sub string
    printf("sub-string extracted : %s\n",subStr);

    return 0;
}