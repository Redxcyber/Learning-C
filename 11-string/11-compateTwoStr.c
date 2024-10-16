//compare two strings

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    
    //input str1
    printf("enter first string : ");
    gets(str1);

    //input str2
    printf("enter second strinng : ");
    gets(str2);

    //compare str1 and str2
    int result = strcmp(str1, str2);
    
    //output result
    if(result==0){
        printf("\n%s == %s",str1,str2);
    }else if(result==-1){
        printf("\n%s < %s",str1,str2);
    }else{
        printf("\n%s > %s",str1,str2);
    }

    return 0;
}