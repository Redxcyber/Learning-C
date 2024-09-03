#include<stdio.h>
int main(){
    int op;
    float n1,n2,result=0;
    char ask;
    do{
        printf("\nEnter two numbers : ");
        scanf("%f %f",&n1,&n2);

        printf("\nFollowing operations are provided \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\nchoose one option from above : ");
        scanf("%d",&op);

        if(op==1){
            result = n1+n2;
        }else if(op==2){
            result = n1-n2;
        }else if(op==3){
            result = n1*n2;
        }else if(op==4){
            result = n1/n2;
        }else{
            printf("error !!");
            continue;
        }

        printf("\n----------------------------------------");
        printf("\n\t Result = %.2f \n",result);
        printf("----------------------------------------\n");

        printf("Do you want to calculate again, press y : ");
        scanf(" %c",&ask);
    }while(ask=='y' || ask=='Y');
    return 0;
}