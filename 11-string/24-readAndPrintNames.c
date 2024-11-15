//read and print names of n students of a class using array of string

#include<stdio.h>
int main(){
    //input no of students
    int n;
    printf("Enter no of student in class : ");
    scanf("%d",&n);

    //clear input buffer, if you will not use it then it will take n-1 string instead of n string because "\n" of number entered is left in input bufffer which is passed to first string due to which only ask to enter n-1 strings only
    while(getchar() != '\n');

    //declare array of strings
    char names[n][20];

    //input names of students
    printf("\nEnter names of the students ->\n");
    for(int i=0; i<n; i++){
        fgets(names[i], 20, stdin);

        //remove newline entered by fgets
        int length=0;
        while(names[i][length] != '\0'){
            length++;
        }
        if(names[i][length-1]=='\n'){
            names[i][length-1]='\0';
        }
    }
    
    //outout names of students
    printf("\nStudents of the class are ->\n");
    for(int i=0; i<n; i++){
        printf("%d. %s\n",i+1,names[i]);
    }

    return 0;
}