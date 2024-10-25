//delete a substr from str and store new str in same variable

#include<stdio.h>
int main(){
    char str[100], newStr[100];
    int pos, length;

    printf("Enter main string : ");
    fgets(str, 100, stdin);

    //length of str
    int len=0;
    while(str[len] != '\0'){
        len++;
    }

    //remove /n if present from str
    if(str[len-1] == '\n'){
        str[len-1] = '\0';
    }

    printf("Enter position from where you want to delete (counting start from zero) : ");
    scanf("%d",&pos);

    printf("Enter length of string that you want to delete : ");
    scanf("%d",&length);

    //delete substr
    for(int i=pos+length; str[i] != '\0'; i++, pos++){
        str[pos] = str[i];
    }

    //add null terminator
    str[pos] = '\0';

    //output str
    printf("%s",str);

    return 0;
}