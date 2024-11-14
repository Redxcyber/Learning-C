//read and display information of all students in class, then edit and display details of all student again using array of structure

#include<stdio.h>
#include<string.h>
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

    //ask for detail updation
    int count;
    printf("Enter which student's details you wanna update : ");
    scanf("%d",&count);
    
    //check if count is valid
    if(count>=1 && count<=n){
        count--;

        //input new details
        int new_roll, new_fee; 
        char new_name[20], new_course[20];

        getchar();
        printf("Enter name : ");
        fgets(new_name, 20, stdin);

        printf("Enter roll no : ");
        scanf("%d",&new_roll);

        getchar();
        printf("Enter course : ");
        fgets(new_course, 20, stdin);

        printf("Enter fee : ");
        scanf("%d",&new_fee);

        //update details
        strcpy(s[count].name, new_name);
        s[count].roll = new_roll;
        strcpy(s[count].course, new_course);
        s[count].fee = new_fee;

        //output details of student
        for(int i=0; i<n; i++){
            printf("\n<-------Details of student-%d-------->\n",i+1);
            printf("Name = %s",s[i].name);
            printf("Roll no = %d\n",s[i].roll);
            printf("Course = %s",s[i].course);
            printf("Fee = %d\n",s[i].fee);
            printf("\n");
        }
    }else{
        printf("WARNING : Enter valid student number \n");
        return 1;
    }

    return 0;
}