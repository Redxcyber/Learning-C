//----------------POINTERS-AND-STRINGS---------------

//print  a string using pointer
#include<stdio.h>
int main(){
    char str[] = "pranav";
    char *pstr;
    pstr = str;
    //method-01
    while(*pstr != 0){
        printf("%c",*pstr);
        pstr++;
    }

    //method-02
    for(int i=0; *(pstr+i) != 0; i++){
        printf("%c",*(pstr+i));
    }

    //method-03
    puts(pstr);
    
    //method-04
    printf("%s",pstr);
    printf("%s",*pstr);
    
    return 0;
}