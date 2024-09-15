//take marks from the user and categories them in to groups 0-10, 10-20, 20-30.... and print histogram of no of students whose marks lie in particular group

#include<stdio.h>
int main(){
    
    int size;
    printf("Enter no of students : ");
    scanf("%d",&size);

    int marks[size];
    int group[10] = {0};
    for(int i=0; i<size; i++){
        printf("Enter marks of student %d = ",i+1);
        scanf("%d",&marks[i]);
        group[(marks[i]/10)]++;
    }

    printf("\nFrequency histogram\n");
    printf("-------------------------\n");
    for(int i=0; i<10; i++){
        printf("%d-%d \t| ",i*10,i*10+10);
        for(int j=1; j<=group[i]; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}