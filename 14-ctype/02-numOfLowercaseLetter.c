#include<stdio.h>
#include<ctype.h>
void main() {
    char str[100];
    int i;
    int lowercase_count=0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    for(i=0; str[i] != '\0'; i++){    //PROBLEM --> it show a error if we put "\0" instead of '\0'
        if(islower(str[i])){
            lowercase_count = lowercase_count+1; // lowercase_count += 1;  OR  lowercase_count++;
        }
    }
    printf("number of lowercase letters = %d",lowercase_count);


    //<---------------Solution------------------>

//    1. Single Quotes (') for Characters:
// When you use single quotes (e.g., 'a', 'b', 'c'), you are representing individual characters.
// These are character literals.
// For example, '\0' represents the null character (ASCII value 0).

//    2. Double Quotes (") for Strings:
// When you use double quotes (e.g., "hello", "world"), you are creating strings.
// A string is an array of characters terminated by a null character ('\0').
// For example, "hello" is actually an array of characters: 'h', 'e', 'l', 'l', 'o', '\0'.

// * In your loop condition (str[i] != '\0'), you are correctly checking for the null character ('\0') to determine the end of the string.
// * If you used double quotes ("\0"), it would be treated as a string (containing only the null character), which is not what you want here


}


