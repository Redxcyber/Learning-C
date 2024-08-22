//find sum and percentage of marks of five subjects

#include<stdio.h>
void main(){
    int s1,s2,s3,s4,s5;
    int sum;
    float percentage;
    printf("Enter marks of five subjects : ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    sum = s1+s2+s3+s4+s5;
    percentage = sum*100/500; // sum/500*100; => will cause a problem
    printf("sum = %d\n",sum);
    printf("percentage = %f",percentage);
}

//there will be problem here it will give percentage = 0 , 
//because sum and 500 both are int and division of ints will int that will be 0 but in actual it will be 0.something(0.78)
// but due to both the operands be the int it returns 0 and 0*100 gives percentage = 0