//use a fn to calculate charge per unit and another to calculate the total bill
#include<stdio.h>
//calc charge per unit i.e unit charge
float calc_unit_charge(int units){
    if(units<=100) return 1.5;
    else if(units<=200) return 2.0;
    else if(units<=300) return 3.0;
    else return 3.5;
}
//calc electricity bill
float calc_electricity_bill(int units){
    return units*(calc_unit_charge(units));
}
int main(){
    int units;
    printf("Enter units used : ");
    scanf("%d",&units);
    //fn call
    float bill = calc_electricity_bill(units);
    printf("Total electricity bill : %.2f \n",bill);
    return 0;
}