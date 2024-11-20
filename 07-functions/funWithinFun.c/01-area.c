//print area and parameter of rectangle

#include<stdio.h>
int calc_parameter(int length, int width){
    return 2*(length+width);
}
void calc_disp(int length, int width){
    int area = length*width;
    int parameter = calc_parameter(length, width);
    printf("\nArea : %d\n",area);
    printf("Parameter : %d\n",parameter);
}
int main(){
    int length, width;
    printf("Enter length and width : ");
    scanf("%d %d",&length, &width);
    calc_disp(length, width);
    return 0;
}