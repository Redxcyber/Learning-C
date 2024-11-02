//find largest num using call by reference

#include<stdio.h>
void max(int *x, int *y, int *z, int *res){
    if(*x >= *y && *x >= *z){
        *res = *x;
    }else if(*y >= *z){
        *res = *y;
    }else{
        *res = *z;
    }
}
int main(){
    int a,b,c,result;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a, &b, &c);
    max(&a, &b, &c, &result);
    printf("Maximum number = %d",result);
    return 0;
}