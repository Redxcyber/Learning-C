#include<stdio.h>
int total_char(char x[]){
    int i,res=0;
    for(i=1; x[i] !='\0'; i++){
        i++;
        res++;
    }
    return res;
}
void main() {
    char str[100];
    int c;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    c = total_char(str);
    if(str[c-1] == '\n'){
        str[c-1] = '\0';
        c--;
    }
    printf("Total number of char in string = %d",c);
}

