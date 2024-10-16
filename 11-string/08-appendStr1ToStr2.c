//Appending a string to the another string

#include<stdio.h>
int main(){
    char sourceStr[100], destStr[100];
    
    //input source str
    printf("enter source string that you want to append : ");
    gets(sourceStr);

    //input destination str
    printf("enter destination string where you want to append : ");
    gets(destStr);

    //output source and destination str
    printf("\nSource string : %s",sourceStr);
    printf("\nDestination string : %s",destStr);

    //count letters in desstination string
    int count=0;
    for(int i=0; destStr[i] != '\0'; i++){
        count++;
    }

    //append source str to destination str
    for(int i=0; sourceStr[i] != '\0'; i++, count++){
        destStr[count] = sourceStr[i];
    }

    //add null terminator
    destStr[count] = '\0';

    //output appended str
    printf("\nAppended string : %s",destStr);

    return 0;
}