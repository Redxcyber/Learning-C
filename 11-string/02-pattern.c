/*
    h 
    h e
    h e l
    h e l l
    h e l l o
    h e l l o
    h e l l
    h e l
    h e
    h
*/

#include<stdio.h>
int main(){
    char str[6] = "hello";
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            printf("%c ",str[j]);
        }
        printf("\n");
    }
    for(int i=4; i>=0; i--){
        for(int j=0; j<=i; j++){
            printf("%c ",str[j]);
        }
        printf("\n");
    }
    return 0;
}