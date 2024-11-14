//assign and display information of a student using nested structure
//Doubt - 15 {obsidian}

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

    strcpy(s1.sname.fname, "pranav");
    strcpy(s1.sname.mname, "singh");
    strcpy(s1.sname.lname, "chandel");
    s1.sdob.day = 23;
    s1.sdob.month = 02;
    s1.sdob.year = 2005;
    s1.roll = 42;

    printf("Name = %s %s %s\n",s1.sname.fname, s1.sname.mname, s1.sname.lname);
    printf("DOB = %d/%d/%d\n",s1.sdob.day, s1.sdob.month, s1.sdob.year);
    printf("Rollno = %d\n",s1.roll);

    return 0;
}