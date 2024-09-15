// In a class there are 5 students. Each student appeared in 3 tests. Write a program using 2d array to print
// 1. marks obtained by each student in different subjects
// 2. total marks and average obtained by each student
// 3. store the avg of each student in a saparate 1d array so that it can be used to calculate the class average
//-------(more precise)-------->

#include<stdio.h>
int main(){
    int marks[5][3];

    //takes marks of student from user
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Enter marks of subject %d of student %d : ",j+1, i+1);
            scanf("%d",&marks[i][j]);
        }
        printf("\n\n");
    }
    

    // total marks obtained by each student
    int totalMarks[5] = {0};
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            totalMarks[i] += marks[i][j];
        }
    }


    // avg marks obtained by each student
    float avgMarks[5] = {0};
    for(int i=0; i<5; i++){
        avgMarks[i] = (float)totalMarks[i]/3;
    }


    // class avg marks
    float sumOfAvg = .0;
    for(int i=0; i<5; i++){
        sumOfAvg += avgMarks[i];
    }
    float classAvg = sumOfAvg/5.0;


    printf("student \t marks in 3 subjects \t total marks \t avg marks\n");
    for(int i=0; i<5; i++){
        printf("%4d \t\t",i+1);
        for(int j=0; j<3; j++){
            printf(" %d \t",marks[i][j]);
        }
        printf("  %4d \t\t   %.2f",totalMarks[i], avgMarks[i]);
        printf("\n");
    }
    printf("\n\n");
    printf("Class average : %.2f",classAvg);
    printf("\n\n");

    return 0;
}