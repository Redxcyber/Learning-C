//insert a string in to main string and store in in new str

#include<stdio.h>
int main(){
    char mainStr[100], str[30], newStr[130];
    int pos;

    printf("Enter main string : ");
    fgets(mainStr, 100, stdin);

    printf("Enter string to be inserted : ");
    fgets(str, 30, stdin);

    printf("Enter position of string to be inserted : ");
    scanf("%d",&pos);

    //calculate length of mainstr
    int len1=0;
    for(int i=0; mainStr[i] != '\0'; i++){
        len1++;
    }

    //fgets also store \n when we press enter while inputting string => remove that \n from mainStr to get accurate len1 of mainStr
    if(mainStr[len1-1] == '\n'){
        mainStr[len1-1] = '\0';
    }

    //calculate length of str
    int len2=0;
    for(int i=0; str[i] != '\0'; i++){
        len2++;
    }

    //fgets also store \n when we press enter while inputting string => remove that \n from str to get accurate len1 of str
    if(str[len2-1] == '\n'){
        str[len2-1] = '\0';
    }

    //copy element in newstr from mainstr up to pos
    int j=0;
    for(int i=0; i<pos; i++, j++){
        newStr[j] = mainStr[i];
    }

    //copy element in newstr from str 
    for(int i=0; str[i] != '\0'; i++, j++){
        newStr[j] = str[i];
    }

    //copy remaining element of mainStr in newstr 
    for(int i=pos; mainStr[i] != '\0'; i++, j++){
        newStr[j] = mainStr[i];
    }

    //add null terminator at the end of newstr
    newStr[j] = '\0';

    //output newstr
    printf("new-str : %s",newStr);
    
    return 0;
}
