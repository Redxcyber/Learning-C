#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5

// Calculate average marks
float calculate_avg(int studentMarks[], int numSubjects) {
    float sum = 0;
    for (int i = 0; i < numSubjects; i++) {
        sum += studentMarks[i];
    }
    return sum / numSubjects;
}

// Assign grade based on average marks
char get_grade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Add student's name and marks
void add_students(char studentNames[][50], int studentMarks[][MAX_SUBJECTS], int numSubjects, int *studentCount) {
    printf("Enter student's name: ");
    fgets(studentNames[*studentCount], 50, stdin);

    // Remove newline character from name
    size_t len = strlen(studentNames[*studentCount]);
    if (len > 0 && studentNames[*studentCount][len - 1] == '\n') {
        studentNames[*studentCount][len - 1] = '\0';
    }

    printf("Enter student's marks for %d subjects: ", numSubjects);
    for (int i = 0; i < numSubjects; i++) {
        scanf("%d", &studentMarks[*studentCount][i]);
    }
    (*studentCount)++;
    getchar(); // Clear buffer
}

// Display all students' names, marks, averages, and grades
void display_students(char studentNames[][50], int studentMarks[][MAX_SUBJECTS], int numSubjects, int studentCount) {
    if (studentCount == 0) {
        printf("\nNo students to display!\n");
        return;
    }
    for (int i = 0; i < studentCount; i++) {
        float average = calculate_avg(studentMarks[i], numSubjects);
        char grade = get_grade(average);

        printf("\nStudent's Name: %s\n", studentNames[i]);
        printf("Marks: ");
        for (int j = 0; j < numSubjects; j++) {
            printf("%d ", studentMarks[i][j]);
        }
        printf("\nAverage: %.2f\n", average); // Display average with 2 decimal places
        printf("Grade: %c\n", grade);
    }
}

// Search for a student by name
void search_student(char studentNames[][50], int studentMarks[][MAX_SUBJECTS], int numSubjects, int studentCount) {
    if (studentCount == 0) {
        printf("\nNo students to search!\n");
        return;
    }

    char searchName[50];
    printf("Enter the name of the student to search: ");
    fgets(searchName, 50, stdin);

    // Remove newline character from searchName
    size_t len = strlen(searchName);
    if (len > 0 && searchName[len - 1] == '\n') {
        searchName[len - 1] = '\0';
    }

    // Search for the student
    int found = 0;
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentNames[i], searchName) == 0) {
            found = 1;
            float average = calculate_avg(studentMarks[i], numSubjects);
            char grade = get_grade(average);

            printf("\nStudent Found!\n");
            printf("Name: %s\n", studentNames[i]);
            printf("Marks: ");
            for (int j = 0; j < numSubjects; j++) {
                printf("%d ", studentMarks[i][j]);
            }
            printf("\nAverage: %.2f\n", average); // Display average with 2 decimal places
            printf("Grade: %c\n", grade);
            break;
        }
    }
    if (!found) {
        printf("\nStudent not found!\n");
    }
}

int main() {
    char studentNames[MAX_STUDENTS][50];
    int studentMarks[MAX_STUDENTS][MAX_SUBJECTS];
    int numSubjects = 3; // Default number of subjects
    int studentCount = 0;
    int choice;

    do {
        printf("\n----------------------------------------------\n");
        printf("\n1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search for a Student\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // Clear buffer after input

        switch (choice) {
            case 1:
                add_students(studentNames, studentMarks, numSubjects, &studentCount);
                break;
            case 2:
                display_students(studentNames, studentMarks, numSubjects, studentCount);
                break;
            case 3:
                search_student(studentNames, studentMarks, numSubjects, studentCount);
                break;
            case 4:
                printf("\nExiting... Goodbye!\n");
                break;
            default:
                printf("\nInvalid option! Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
