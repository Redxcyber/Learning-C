#include<stdio.h>
int main(){
    
    char strr[7];
    printf("Enter your district (must have 6 char)  : ");

    int i=0;
    while((strr[i]=getchar()) != '\n' && i<6){
        i++;
    }
    strr[i] = '\0';
    printf("your district name is %s\n",strr);


    //method-2
    printf("method-2\n");
    for(int i=0; (strr[i]=getchar()) != '\n' && i<6; i++){
        //nothing here
    }
    strr[i] = '\0';
    printf("your district name is %s\n",strr);

    // doubt-1 : getchar() to single character at a time leta hai as input , to fir yaha whole string kaise le raha h , ye mat bolna ki yaha loop use kiya , agar loop use kiya h to index 0 me whole string kaise store kr dega
    // doubt-2 : aur jab mai single character dekar enter press krta loop terminate ho jata h aur output return kar de rha h
   
   //-----------------------------------SOLUTION OF DOUBT-2---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    char str[7];
    printf("Enter your district (must have 6 char)  : ");

    int j=0;
    while(j<6){
        char ch = getchar();
        if(ch != '\n'){
            str[j] = ch;
            j++;
        }
    }
    str[j] = '\0';
    printf("your district name is %s\n\n",str);
   
    // doubt-1 : getchar() takes single character at a time as input , then when we give whole string "maholi" at once then how it works correctly without throwing any error
    
    //--------------------------------------SOLUTION OF DOUBT-1-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    // The function getchar() is designed to read one character at a time from the standard input, and in your code, it's being used in a loop to gather characters until you have 6 characters stored in the str array. Here's how it's working:

    // 1. Input Buffering: When you type a string (like "maholi") and press enter, the entire string is placed in an input buffer. This includes a newline character ('\n') at the end when you press enter.
    // 2. getchar in the Loop: The getchar() function takes one character from the buffer at a time. So, in your loop, getchar() grabs the first character, stores it in str[i], increments i, and repeats until i reaches 6. At this point, 6 characters from the input buffer are taken.
    // 3. Skipping Newline: The line if(ch != '\n') is ensuring that the newline character ('\n') is ignored, which is why your code works fine for strings of exactly 6 characters.

    // Here’s how the process looks step-by-step:

    // You enter "maholi".
    // * The input buffer contains: 'm', 'a', 'h', 'o', 'l', 'i', '\n'
    // * getchar() extracts the characters one by one, ignoring the newline \n.
    // * After extracting 6 characters, the string is null-terminated with str[i] = '\0'.
    // In summary, getchar() is indeed taking one character at a time, but since your input is buffered, the program reads each character until 6 valid characters are processed.




    return 0;
}