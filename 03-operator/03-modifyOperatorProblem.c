#include<stdio.h>
void main() {
    int a=2, b=3, c=1, d;
    d = ++a || ++a && ++b;
    printf("value of a = %d\n\n",a);
    printf("value of b = %d\n\n",b);
    printf("value of c = %d\n\n",c);
    printf("value of d = %d\n\n",d);
    
}