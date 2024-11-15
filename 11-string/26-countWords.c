//count words and character in a sentance taken from user

#include<stdio.h>
int main(){
    char text[1000];
    int count=0;
    printf("Enter text line : ");
    fgets(text, 1000, stdin);

    int i;
    for(i=0; text[i] != '\0'; i++){
        if(text[i]==' '){
            count++;
        }
    }

    printf("number of word = %d\n",count+1);
    printf("number of char = %d\n",i-count-1);

    return 0;
}