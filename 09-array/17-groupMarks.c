//take marks from the user and categories them in to groups 0-10, 10-20, 20-30.... and print no of students whose marks lie in particular group

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

    printf("\nGroup \t No of students(frequency)\n");
    printf("-------------------------\n");
    for(int i=0; i<10; i++){
        printf("%d-%d \t %4d\n",i*10,i*10+10,group[i]);
    }

    return 0;
}