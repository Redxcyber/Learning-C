//use one fn to calculate square of sides and another fn to calculate hypotanuse

#include<stdio.h>
#include<math.h>
float square(float side){
    return side*side;
}
float calc_hypotenuse(float b, float h){
    return sqrt(square(b)+square(h));
}
int main(){
    float b, h;
    printf("Enter base and height : ");
    scanf("%f %f",&b, &h);
    float hypotanuse = calc_hypotenuse(b,h);
    printf("Hypotenuse = %.2f\n",hypotanuse);
    return 0;
}