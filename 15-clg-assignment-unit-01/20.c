//decimal to binary and binary to decimal

#include<stdio.h>
int main(){
    int dec1=12, bin1=0;
    int bin2=1100, dec2=0;
    int base=1;
    for(int i=dec1; i>0; i/=2){
        int rem = i%2;
        bin1 = bin1+rem*base; //bin1 += rem*base;
        base *= 10;
    }
    printf("Binary of %d = %d\n",dec1,bin1);

    
    base = 1;
    for(int i=bin2; i>0; i/=10){
        int rem = i%10;
        dec2 =dec2+rem*base; //dec2 += rem*base;
        base *= 2;
    }
    printf("decimal of %d = %d\n",bin2,dec2);
    return 0;
}