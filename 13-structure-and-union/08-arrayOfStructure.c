//read and ddisplay information of all students in class using array of structure

#include<stdio.h>
int main(){
    //structure declaration
    struct student{
        char name[20];
        int roll;
        char course[20];
        int fee;
    };
    
    //input no of student 
    int n;
    printf("Enter no of students in class : ");
    scanf("%d",&n);

    //declaring array of students
    struct student s[n];
    
    //input details of student
    for(int i=0; i<n; i++){
        printf("Enter details of student-%d ->\n",i+1);
        getchar();
        printf("Enter name : ");
        fgets(s[i].name, 20, stdin);
        printf("Enter roll no : ");
        scanf("%d",&s[i].roll);
        getchar();
        printf("Enter course : ");
        fgets(s[i].course, 20, stdin);
        printf("Enter fee : ");
        scanf("%d",&s[i].fee);
        printf("\n");
    }
    
    //output details of student
    for(int i=0; i<n; i++){
        printf("<-------Details of student-%d-------->\n",i+1);
        printf("Name = %s",s[i].name);
        printf("Roll no = %d\n",s[i].roll);
        printf("Course = %s",s[i].course);
        printf("Fee = %d\n",s[i].fee);
        printf("\n");
    }
    
    return 0;
}