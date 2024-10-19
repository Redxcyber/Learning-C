//extract substring from the left of the str

#include<stdio.h>
int main(){
    char str[100], subStr[100];

    //input str from user
    printf("Enter a string : ");
    gets(str);

    //input no of letters to be extracted
    int letters;
    printf("Enter number of letters to be extracted from left : ");
    scanf("%d",&letters);
    
    //extract sub string
    int i;
    for(i=0; i<letters && str[i] != '\0'; i++){
        subStr[i] = str[i];
    }

    //add null terminator at the end of sub string
    subStr[i] = '\0';

    //output sub string
    printf("sub-string extracted : %s\n",subStr);

    return 0;

    /* -----------> IMPORTANT NOTE <----------------

        if we use only i<letters in loop condition then loop unneccessory if string have letter less than the no of letters to be extracted
        if str[100] = "hy";
        no of letter to be extracted = 4;
        then output = "hy"
        output is correct there is no error because str[2] will be '\0' and it will get added to substr[2] and letter we add null terminator substr[i=4] = '\0' but there is no meaning of it because null terminator got added by loop at i=2
        but problem is that loop run unneccesory 4(i) times, it should run 2(no of letters in str) times only

        to overcome this problem we add loop condition 
        i<letters && str[i] != '\0' => at i=2, 2<4 && str[i] != '\0' => true && false => false => loop terminate => no of iteration = 2
        now loop will run only 2(no of letters in str) times if str have letter less that no of letters to be extracted

    */
}