//area and circumference of circle

#include<stdio.h>
void main(){
    float rad,area,circumference;
    printf("\033[0;31mEnter radius : \033[0m");
    scanf("%f",&rad);
    area = 3.14*rad*rad;
    circumference = 2*3.14*rad;
    printf("\033[0;32Area of circle : %f\033[0m",area);
    printf("Circumference of circle : %f",circumference);

}