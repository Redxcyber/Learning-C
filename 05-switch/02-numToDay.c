// print corresponding day according to entered number 

#include<stdio.h>
void main(){
    int n;
    printf("Enter any number between 1 and 7 : ");
    scanf("%d",&n);
    switch(n){
        case 1: printf("moday\n");
                break;
        case 2: printf("tuesday\n");
                break;
        case 3: printf("wedday\n");
                break;
        case 4: printf("thursday\n");
                break;
        case 5: printf("friday\n");
                break;
        case 6: printf("saturday\n");
                break;
        case 7: printf("sunday\n");
                break;
        default: printf("Error !");
    }
    
}