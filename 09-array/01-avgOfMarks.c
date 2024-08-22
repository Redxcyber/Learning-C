//take marks of five subjects from the student and calculate avg of them

#include<stdio.h>
void main(){
    int marks[5];
    int length = sizeof(marks)/sizeof(marks[0]);
    int i;
    float avg,sum=0;
    
    printf("Enter marks of five subjects : ");
    // scanf("%d %d %d %d %d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
    
    for(i=0; i<length; i++){ //i<5 will also work but i<legth is also workable for array of unknown sizes
        scanf("%d",&marks[i]);
    }
    for(i=0; i<length; i++){
        sum += marks[i];
    }
    avg = sum/length;
    printf("Average = %f",avg);
}