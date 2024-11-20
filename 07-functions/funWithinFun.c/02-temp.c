//convert celcius to farenhiet and check whether temperature is high, normal or low

#include<stdio.h>
float convert_to_farenhiet(float celcius){
    return (celcius*9/5)+32;
}
void check_temperature(float celcius){
    float farenhiet = convert_to_farenhiet(celcius);
    if(farenhiet>100){
        printf("Temperature is high\n");
    }else if(farenhiet<43){
        printf("Temperature is low\n");
    }else{
        printf("Temperature is normal\n");
    }
}
int main(){
    float celcius;
    printf("Enter celcius : ");
    scanf("%f",&celcius);
    check_temperature(celcius);
    return 0;
}