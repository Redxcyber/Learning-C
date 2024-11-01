//add two floating point num using pointers, result must have only two digits after decimal

#include<stdio.h>
int main(){
    float a,b,sum=0.0;
    float *pa=&a, *pb=&b, *psum=&sum;
    printf("Enter two numbers : ");
    scanf("%f %f",pa,pb);
    *psum = *pa + *pb; //---> sum = a + b;
    printf("sum of %.2f and %.2f = %.2f\n",*pa, *pb, *psum);
    printf("sum of %.2f and %.2f = %.2f\n",a, b, sum);
    return 0;
}