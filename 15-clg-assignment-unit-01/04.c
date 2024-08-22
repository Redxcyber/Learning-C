//degree celcius to farenhiet

#include<stdio.h>
void main(){
    float C,F;
    printf("Enter temperature in centigrade : ");
    scanf("%f",&C);
    F = C*9/5+32;
    printf("Farenhiet : %f",F);
}