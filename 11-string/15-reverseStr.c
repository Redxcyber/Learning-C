//take a string from user reverse it and store it in same string variable 

#include<stdio.h>
int main(){
    char str[100], revStr[100];

    //input str from user
    printf("Enter a string : ");
    gets(str);

    //find length of original str
    int length=0;
    for(int i=0; str[i] != '\0'; i++){
        length++;
    }

    //reverse str {method-01}
    for(int i=length-1, j=0; i>j; i--, j++){
        int temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    //method-02 {logic is same, easy to understand} 
    int i=length-1, j=0;
    while(i>j){
        int temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }

    //print reverse str
    printf("reversed string : %s\n",str);

    return 0;
}