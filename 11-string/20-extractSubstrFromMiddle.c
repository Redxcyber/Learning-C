//extract substring from the middle of the str

#include<stdio.h>
int main(){
    char str[100], subStr[100];

    //input str from user
    printf("Enter a string : ");
    gets(str);

    //counting menu
    int option;
    printf("1. Counting start from 0\n");
    printf("2. Counting start from 1\n");
    printf("Choose any option : ");
    scanf("%d",&option);

    
    if(option==1 || option==2){
        //input positions
        int pos1, pos2;
        printf("\nEnter position of first and last letter : ");
        scanf("%d %d",&pos1, &pos2);

        //extract substr 
        if(option==1){
            int j=0;
            for(int i=pos1; i<=pos2 && str[i] != '\0'; i++, j++){
                subStr[j] = str[i];
            }

            //add null terminator at the end of sub string
            subStr[j] = '\0';

        }else if(option==2){
            int j=0;
            for(int i=pos1-1; i<pos2 && str[i] != '\0'; i++, j++){
                subStr[j] = str[i];
            }

            //add null terminator at the end of sub string
            subStr[j] = '\0';
        }

        //output sub string
        printf("sub-string extracted : %s\n",subStr);

    }else{
        printf("\nChoose valid option..!!\n");

    }

    return 0;
}
