// In a class there are 5 students. Each student appeared in 3 tests. Write a program using 2d array to print
// 1. marks obtained by each student in different subjects
// 2. total marks and average obtained by each student
// 3. store the avg of each student in a saparate 1d array so that it can be used to calculate the class average

//-----> works, but does not store avg of each student in saparate 1d array
#include<stdio.h>
int main(){
    int marks[5][3];

    //takes marks of student from user
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Enter marks of subject %d of student %d : ",j+1, i+1);
            scanf("%d",&marks[i][j]);
        }
        printf("\n--------------------------------------------------------\n");
    }
    

    
    // 1. marks obtained by each student in different subjects
    printf("\nRepresenting 2d-Array of students(row) and marks obtained(column)\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%4d ",marks[i][j]);
        }
        printf("\n");
    }
    printf("\n--------------------------------------------------------\n");


    // 2. total marks and average obtained by each student
    float totalAvg = .0;
    for(int i=0; i<5; i++){
        int totalMarks = 0;
        float avgMarks = .0;
        printf("Total marks obtained by student %d : ",i+1);
        for(int j=0; j<3; j++){
            totalMarks += marks[i][j];
            avgMarks = (float)totalMarks/3;
        }
        totalAvg += avgMarks;
        printf("%d\n",totalMarks);
        printf("avg marks obtained by student %d   : %.2f \n\n",i+1, avgMarks);
    }
    printf("\n--------------------------------------------------------\n");
    printf("Class Average : %.2f\n",totalAvg/10);




    return 0;
}