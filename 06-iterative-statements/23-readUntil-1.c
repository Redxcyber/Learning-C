// write a program to read the numbers until -1 is encountered. Also count the number of +ve, -ve,, zeroe values enterd by the user

#include<stdio.h>
int main(){
    int num;
    int positive_count=0, negative_count=0, zero_count=0;
    printf("Enter any number (-1 to stop): ");
    
    while(1){
        scanf("%d",&num);
        if(num == -1){
            break;
        }else if(num>0){
            positive_count++;
        }else if(num==0){
            zero_count++;
        }else if(num<0){
            negative_count++;
        }else{
            printf("Error\n");
        }
    }
    printf("positive count = %d\n",positive_count);
    printf("negative count = %d\n",negative_count);
    printf("zero count = %d\n",zero_count);
    
    return 0;
}