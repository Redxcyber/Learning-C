// take n from the user and print  pranav n times using recursion

#include<stdio.h>
void printName(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printName(n);
    return 0;
}

void printName(int x){
    if(x==1){
        printf("%d. Pranav\n",x);
    }else {
        printf("%d. Pranav\n",x);
        printName(x-1);
    }
}