#include<stdio.h>
int main(){
    int decimal_num, octal_num=0;
    int i=1;
    printf("Enter a number : ");
    scanf("%d",&decimal_num);

    while(decimal_num != 0){
        int rem = decimal_num%8;
        octal_num += rem*i;
        i *= 10;
        decimal_num /= 8;
    }
    printf("octal number = %d",octal_num);
    return 0;
}