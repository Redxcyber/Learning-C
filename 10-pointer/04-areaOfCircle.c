//area of circle using pointer variables

#include<stdio.h>
int main(){
    float radius, area;
    float *pRadius=&radius, *pArea=&area;
    printf("enter radius of circle in meter : ");
    scanf("%f",pRadius);
    *pArea = 3.14*(*pRadius)*(*pRadius);
    printf("Area of circle = %.2f\n",*pArea);
    printf("Area of circle = %.2f",area);
    return 0;
}