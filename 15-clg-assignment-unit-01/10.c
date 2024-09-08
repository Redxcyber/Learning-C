//take marks of five subjects and print percentage and print grade

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int sum;
    float percentage;
    char grade;
    printf("Enter marks of five subjects : ");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    sum = a+b+c+d+e;
    percentage = (float)sum*100/500;
    printf("Percentage = %.2f\n",percentage);
    int intPercentage = (int) percentage;
    printf("Percentage in int = %d\n",intPercentage);
    if(intPercentage>=90 && intPercentage<=100){
        grade = 'A';
    }else if(intPercentage>=80 && intPercentage<90){
        grade = 'B';
    }else if(intPercentage>=60 && intPercentage<80){
        grade = 'C';
    }else if(intPercentage<60){
        grade = 'D';
    }else {
        printf("Error\n");
    }
    printf("Grade = %c",grade);
    return 0;
}