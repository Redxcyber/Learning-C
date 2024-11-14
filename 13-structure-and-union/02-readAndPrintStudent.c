//read and print information of student 

#include <stdio.h>
int main() {
    struct student {
        char name[30];
        int roll;
        char course[50];
        int fee;
    };
    
    struct student stud1;
    
    printf("Enter name: ");
    fgets(stud1.name, sizeof(stud1.name), stdin);
    
    printf("Enter roll no: ");
    scanf("%d", &stud1.roll);

    while(getchar() != '\n');

    printf("Enter course: ");
    fgets(stud1.course, sizeof(stud1.course), stdin);
    
    printf("Enter fee: ");
    scanf("%d", &stud1.fee);

    printf("\nName = %s", stud1.name);
    printf("Roll no = %d\n", stud1.roll);
    printf("Course = %s", stud1.course);
    printf("Fee = %d\n", stud1.fee);

    return 0;
}
