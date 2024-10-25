//factorial using tail recursive method

#include<stdio.h>
int factorial(int x, int res){
   if(x==1) return res;
   else return factorial(x-1,x*res);
}
int main(){
    int n;
    int result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = factorial(n,1); // here 1 is auxiliary parameter used to form the result, the pending operation of non tail recursion is incorporated to auxiliarry parameter so that recursive call no longer has a pending operation
    printf("Factorial = %ld",result);

    //we generally use auxiliarry fn while using auxiliarry parameter , it is used to hide the fact that auxiliarry paramter is needed and to keep syntax clean
    //check----> 21-fatorial3.c

    return 0;
}
