//sort names of student using array of string

#include<stdio.h>
#include<string.h>
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

    //sort name using bubble sort
    char temp[20];
    for(int i=0; i<n-1; i++){
        //if there is no swapping in any pass that means we got our desired order in less than (n-1) pass then we will break the loop
        int flag=0;
        for(int j=0; j<n-1-i; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
                flag++;
            }
        }
        if(flag==0) break;
    }

    //outout names of students
    printf("\nStudents of the class are ->\n");
    for(int i=0; i<n; i++){
        printf("%s\n",names[i]);
    }

    return 0;
}