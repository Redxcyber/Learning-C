//compare two strings

#include<stdio.h>
int main(){
    char str1[100], str2[100];
    
    //input str1
    printf("enter first string : ");
    gets(str1);

    //input str2
    printf("enter second strinng : ");
    gets(str2);

    //find length of str1 and str2
    int len1=0, len2=0;
    for(int i=0; str1[i] != '\0'; i++){
        len1++;
    }
    for(int i=0; str2[i] != '\0'; i++){
        len2++;
    }

    int i=0;
    int small;
    if(len1==len2){
        while(i<len1){
            if(str1[i]==str2[i]) i++;
            else break;
        }
        if(i==len1){
            printf("%s == %s",str1,str2);
        }else{
            if(str1[i]>str2[i]){
                printf("%s > %s",str1,str2);
            
            }else if(str1[i]<str2[i]){
                printf("%s < %s",str1,str2);
            }
        }
    }else{
        i=0;
        if(len1<len2) small=len1;
        else small=len2;
        while(i<small){
            if(str1[i]==str2[i]) i++;
            else break;
        }
        if(i==small){
            printf("%s < %s",str1,str2);
            
        }else{
            printf("%s > %s",str1,str2);
        }
    }

    return 0;
}