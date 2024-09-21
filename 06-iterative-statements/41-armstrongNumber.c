//check whether a number is armstong number or not 
//if number = sum of cube of its digit then, it is armstrong else not

#include<stdio.h>
int main(){
    // int num;
    // int sumOfCubeOfDigit=0;
    // printf("Enter num : ");
    // scanf("%d",&num);

    // if(num<0){
    //     printf("Enter positive number\n");
    //     return 1;
    // }

    // for(int i=num; i>0; i/=10){
    //     int digit = i%10;
    //     int cubeOfDigit = digit * digit * digit;
    //     sumOfCubeOfDigit += cubeOfDigit;
    // }

    // if(sumOfCubeOfDigit==num){
    //     printf("Yes, %d is armstrong number",num);
    // }else{
    //     printf("No, %d is not armstrong number",num);
    // }
    
    // return 0;


    while(1){

        int num;
        int sumOfCubeOfDigit=0;
        printf("Enter num : ");
        scanf("%d",&num);

        if(num>=0){
            for(int i=num; i>0; i/=10){
                int digit = i%10;
                int cubeOfDigit = digit * digit * digit;
                sumOfCubeOfDigit += cubeOfDigit;
            }

            if(sumOfCubeOfDigit==num){
                printf("Yes, %d is armstrong number\n\n",num);
            }else{
                printf("No, %d is not armstrong number\n\n",num);
            }

        }else{
            printf("WARNING : Enter positive number\n\n");
            continue;
        }

    }

    return 0;
}