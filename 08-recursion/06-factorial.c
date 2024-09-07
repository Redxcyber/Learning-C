// factorial using recursion

#include<stdio.h>
int factorial(int x);
int main(){
    int n;
    int result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = factorial(n);
    printf("Factorial = %ld",result);
    return 0;
}

int factorial(int x){
    if(x==1 || x==0){
        return x;
    }else{
        return x * factorial(x-1);
    }
}


/* it will also work correctly

    // int factorial(int x){
    //     if(x==1 || x==0) return 1;
    //     return x * factorial(x-1);
    // }

    // agar ek function me 2 return statement hai to agar ek return chal gay to uske baad ke koi bhi statement run nahi hote
*/

// also the factorial of 0 is 1 , so if(x==1 || x==0)