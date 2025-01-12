#include<stdio.h>
int main(){
    int a,b,c;
    int largest, second_largest;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a, &b, &c);

    if(a>=b && a>=c){
        largest = c;
        second_largest = (b>c) ? b : c;
    }else if(b>=c && b>=a){
        largest = b;
        second_largest = (c>a) ? c : a;
    }else{
        largest = c;
        second_largest = (a>b) ? a : b;
    }

    printf("Largest : %d\n",largest);
    printf("Second largest : %d\n",second_largest);

    return 0;
}