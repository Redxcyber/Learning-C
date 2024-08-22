#include<stdio.h>
void main() {
    int a;
    short b;
    char c; 
    long int d;
    long long int e;
    float f;
    double g;
    long double h;
    int op;
    printf("\n\n");
    printf("size of int = %d bytes\n\n",sizeof(a));
    printf("size of short = %d bytes\n\n",sizeof(b));
    printf("size of char = %d bytes\n\n",sizeof(c));
    printf("size of long int = %d bytes\n\n",sizeof(d));
    printf("size of long long int = %d bytes\n\n",sizeof(e));
    printf("size of float = %d bytes\n\n",sizeof(f));
    printf("size of double = %d bytes\n\n",sizeof(g));
    printf("size of long double = %d bytes\n\n",sizeof(h));
}