//check whether a number is armstong number or not 
//if number = sum of power(no of digits) of its digit then, it is armstrong else not

#include<stdio.h>
int power(int base, int exp){
    int result = 1;
    for(int i=1; i<=exp; i++){
        result *= base;
    }
    return result;
}
int main(){
    int num;
    int digitCount=0, sumOfPowerOfDigit=0;

    printf("Enter positive number : ");
    scanf("%d",&num);

    if(num<0){
        printf("Negative numbers are not allowed ");
        return 1;
        
    }else{
        for(int i=num; i>0; i/=10){
            digitCount++;
        }
        for(int i=num; i>0; i/=10){
            int digit = i%10;
            int powerOfDigit = power(digit, digitCount); 
            sumOfPowerOfDigit += powerOfDigit;
            printf("powerOfDigit = %d\n",powerOfDigit);
        }
        printf("sumOfPowerOfDigit = %d\n",sumOfPowerOfDigit);
        printf("num = %d\n",num);
        if(sumOfPowerOfDigit==num){
            printf("Yes, %d is armstrong number\n\n",num);
        }else{
            printf("No, %d is not armstrong number\n\n",num);
        }
    }
    return 0;
}

//pow() will not work because it return float value causes precision error
//when you will use pow, it shows 153 is not armstrong but in real it is
//error caused due to pow, pow(5,3) returns 124 instead of 125, hence sumOfPowerOfDigit = 152
//and num = 153 and hence both are not equal therefore, it return 153 is not armstrong