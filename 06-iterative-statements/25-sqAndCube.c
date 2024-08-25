//write a program using do while loop to display square and cube of first n natural numbers

#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter n : ");
    scanf("%d",&n);
        printf("\n-------------------------------------------------\n");
    do{
        printf("| \t %d \t | \t %d \t | \t %d \t |",i,i*i,i*i*i);
        printf("\n--------------------------------------------------\n");
        i++;
    }while(i<=n);

    return 0;
}