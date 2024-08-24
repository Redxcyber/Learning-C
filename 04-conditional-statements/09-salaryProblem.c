/*
    A company decides to give bonus to all its employees on Diwali. A 5% bonus on salary is given to the 
    male workers and 10% bonus on salary to the female workers. Write a program to enter the salary and sex 
    of the employee. If the salary of the employee is less than Rs 10,000 then the employee gets an extra 2% 
    bonus on salary. Calculate the bonus that has to be given to the employee and display the salary that the 
    employee will get.
*/

#include<stdio.h>
void main(){
    int salary;
    char sex;
    printf("Enter your salary : ");
    scanf("%d",&salary);
    scanf("%s");
    printf("Enter your sex , m for male , f for female : ");
    scanf("%c",&sex);
    if(salary<10000){
        if(sex == 'm' || sex == 'M'){
            salary = 10000+(10000*7/100);
            printf("Incremented Salary of male= %d",salary);
        }
        else {
            salary = 10000+(10000*12/100);
            printf("Incremented Salary of female = %d",salary);
        }
    } 
    else {
        if(sex == 'm' || sex == 'M'){
            salary = 10000+(10000*5/100);
            printf("Incremented Salary of male= %d",salary);
        }
        else {
            salary = 10000+(10000*10/100);
            printf("Incremented Salary of female = %d",salary);
        }
    }
}