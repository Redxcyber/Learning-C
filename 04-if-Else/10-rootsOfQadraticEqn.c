// find root of a quadratic equation 

#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    float D,deno,root1,root2;
    printf("Enter value of a , b , c : ");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b - 4*a*c;
    deno = 2*a;
    if(D>0){
        printf("Roots are real and distinct\n");
        root1 = (-b + sqrt(D))/deno;
        root2 = (-b - sqrt(D))/deno;
        printf("Root1 = %.2f\nRoot2 = %.2f",root1,root2);
    }
    else if(D=0){
        printf("Roots are real and equal\n");
        root1 = -b/deno;
        printf("Root1 = %.2f\nRoot2 = %.2f",root1,root1);
    }
    else{
        printf("Roots are imaginary\n");
    }
}