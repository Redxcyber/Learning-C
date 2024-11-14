//read, print, add and subtract two complex number using structure

#include<stdio.h>
int main(){
    struct complex{
        int real;
        int img;
    };

    struct complex n1, n2, sum_c, sub_c;
    int option;
    do{
        printf("Enter real part of first number : ");
        scanf("%d",&n1.real);
        printf("Enter imaginary part of first number : ");
        scanf("%d",&n1.img);

        printf("Enter real part of second number : ");
        scanf("%d",&n2.real);
        printf("Enter imaginary part of second number : ");
        scanf("%d",&n2.img);

        printf("\n1. Display complex numbers\n2. Add the complex numbers\n3. Subtract the complex numbers\n4. Exit\nChoose any one option : ");
        scanf("%d",&option);

        if(option==1){
            printf("\nFirst complex number = %d + %di\n",n1.real,n1.img);
            printf("Second complex number = %d + %di\n",n2.real,n2.img);
        }else if(option==2){
            printf("Addition = %d + %di\n",n1.real+n2.real,n1.img+n2.img);
        }else if(option==3){
            printf("Subtraction = %d + %di\n",n1.real-n2.real,n1.img-n2.img);
        }
        printf("\n-------------------------------------------------------\n");
    }while(option != 4);
    return 0;
}