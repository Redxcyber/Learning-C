#include<stdio.h>
int main(){
    
    //string declaration
    char str[5];

    //initialization as constant string
    char str1[7] = "pranav";

    //initialization as character array
    char str2[7] = {'p', 'r', 'a', 'n', 'a', 'v', '\0'};

    /* not allowed
    
    char str3[7];
    str3 = "pranav";
    

    // we can't use array name as L value
    char str4[7], str5[7] = "pranav";
    str4 = str5;

    */


    //-----------ways of reading strings--------------//

    
    //1. using scanf() function
    char str6[100];
    printf("Enter your name : ");
    scanf("%s",&str6);
    printf("your name is %s\n",str6);
    //DRAWBACK : scanf fn terminate string as soon as it finds space , if we enter "pranav singh" then it will store only "pranav"


    
    //2. using gets() function
    char str7[100];
    printf("Enter your brand name  : ");
    getchar(); // to avoid input buffering
    gets( str7);
    printf("your brand name is %s\n",str7);
    //gets() overcome the drawback of scanf()



    //3. using getchar() function
    char str8[7];
    printf("Enter your district (must have 6 char)  : ");

    //method-1
    int i=0;
    while((str8[i]=getchar()) != '\n' && i<6){
        i++;
    }
    str8[i] = '\0';
    printf("your district name is %s\n",str8);


    //method-2
    for(int i=0; (str8[i]=getchar()) != '\n' && i<6; i++){
        //nothing here
    }
    str8[i] = '\0';
    printf("your district name is %s\n",str8);


    //method-3
    char str8[100];
    int i = 0;
    printf("Enter string (Press Enter to finish):\n");

    // Loop through to read characters
    while (1) {
        char ch = getchar();  //read single character

        //terminate loop, if enter key pressed
        if (ch == '\n') {
            break; 
        }
        
        str8[i++] = ch;  //store input char in str8 array
    }
    str8[i] = '\0'; // terminate string with null
    printf("You entered: %s\n", str);



    //-----------ways of displaying strings--------------//

    //1. using printf() fn
    char str9[5] = "atul";
    printf("%s\n",str9);
    
    //2. using puts() fn
    puts(str9);

    //3. using putchar() fn
    for(int i=0; str9[i] != '\0'; i++){
        putchar(str9[i]);
    }
    return 0;
}