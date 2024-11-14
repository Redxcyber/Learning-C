//read and display information of a student using nested structure

#include<stdio.h>
#include<string.h>
int main(){
    struct name{
        char fname[20];
        char mname[20];
        char lname[20];
    };
    struct dob{
        int day;
        int month;
        int year;
    };
    struct student{
        struct name sname;
        struct dob sdob;
        int roll;
    };
    struct student s1;

    printf("Enter first name : ");
    scanf("%s",s1.sname.fname);
    printf("Enter middle name : ");
    scanf("%s",s1.sname.mname);
    printf("Enter last name : ");
    scanf("%s",s1.sname.lname);
    printf("Enter day of dob : ");
    scanf("%d",&s1.sdob.day);
    printf("Enter month of dob : ");
    scanf("%d",&s1.sdob.month);
    printf("Enter year of dob : ");
    scanf("%d",&s1.sdob.year);
    printf("Enter roll no : ");
    scanf("%d",&s1.roll);

    printf("\n");
    printf("Name = %s %s %s\n",s1.sname.fname, s1.sname.mname, s1.sname.lname);
    printf("DOB = %d/%d/%d\n",s1.sdob.day, s1.sdob.month, s1.sdob.year);
    printf("Rollno = %d\n",s1.roll);

    return 0;
}