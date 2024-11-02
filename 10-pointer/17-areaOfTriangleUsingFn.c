//read input and calculate area of triangle using call by reference

#include<stdio.h>
void read(float *b, float *h){
    printf("Enter base of triangle : ");
    scanf("%f",b);
    printf("Enter height of triangle : ");
    scanf("%f",h);
}
void calc(float *b, float *h, float *res){
    *res = 0.5*(*b)*(*h);
}
int main(){
    float base,height, result;
    read(&base, &height);
    calc(&base, &height, &result);
    printf("Area of triangle = %.2f",result);
    
    //you can use function as an argument in printf when it returns a value, here calc() does not return anything, it only update the value of result
    //printf("Area of triangle = %f",calc(&base, &height, &result));
    return 0;
}