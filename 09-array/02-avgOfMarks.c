//take marks of five subjects from the student and calculate avg of them

#include<stdio.h>
void main(){
    int i,n;
    float avg,sum=0;

    printf("How many numbers you want to insert : ");
    scanf("%d",&n);

    int marks[n];
    int length = sizeof(marks)/sizeof(marks[0]);
    
    for(i=0; i<length; i++){
        printf("Enter marks of subjects : ");    
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    
    avg = sum/length;
    printf("Average = %f",avg);
}