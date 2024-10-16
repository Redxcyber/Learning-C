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

    int i=0, j=0;

    //---------------------method-01-----------------------


    //here we count letters in destination str
    while(destStr[i] != '\0'){
        i++;
    }

    //append source str to destination str
    while(sourceStr[j] != '\0'){
        destStr[i] = sourceStr[j];
        i++;
        j++;
    }

    //add null terminator to destination str
    destStr[i] = '\0';

    //output appended str
    printf("\nAppended string : %s",destStr);


    //------------------method-02--------------------------


    //here we count letters in destination str
    for(i=0; destStr[i] != '\0'; i++);

    //append source str to destination str
    for(j=0; sourceStr[j] != '\0'; j++, i++){
        destStr[i] = sourceStr[j];
    }

    //add null terminator to destination str
    destStr[i] = '\0';

    //output appended str
    printf("\nAppended string : %s",destStr);

    return 0;
}