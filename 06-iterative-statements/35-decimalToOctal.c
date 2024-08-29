#include<stdio.h>
#include<math.h>
int main(){
    int decimal_num, octal_num=0;
    int i=0;
    printf("Enter a number : ");
    scanf("%d",&decimal_num);

    while(decimal_num != 0){
        int rem = decimal_num%8;
        octal_num += rem*pow(10,i);
        i++;
        decimal_num /= 8;
    }

    // for(; decimal_num !=0; decimal_num/=8){
    //     int rem = decimal_num%8;
    //     octal_num += rem*pow(10,i);
    //     i++;
    // }


    // you will get wrong octal value in some cases ex- 70, 80, 90 etc. It occurs due to pow function
    // pow function returns a floating point value specifically it returns double 
    // due to which it introduce floating point orecesion error
    // you should use normal integer math to calculate octal_num
    // correct code is given in 36-decimalToOctal.c

    printf("octal number = %d",octal_num);
    return 0;
}