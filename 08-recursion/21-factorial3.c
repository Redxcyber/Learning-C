//factorial using tail recursive method

#include<stdio.h>
int auxFunc(int x){
    return factorial(x,1);
}
int factorial(int x, int res){
   if(x==1 || x==0) return res;
   else return factorial(x-1,x*res);
}
int main(){
    int n;
    int result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = auxFunc(n); 
    printf("Factorial = %ld",result);
    return 0;
}

//above code will generate a warning that function factorial is not defined before using in auxfn 
//we must do formal declaration of function before using it 
//or reorder function in specific manner


//formal declaring fn for avoiding warnings and errors
#include<stdio.h>
int auxFunc(int x);
int factorial(int x, int res);
int main(){
    int n;
    int result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = auxFunc(n); 
    printf("Factorial = %ld",result);
    return 0;
}
int auxFunc(int x){
    return factorial(x,1);
}
int factorial(int x, int res){
   if(x==1 || x==0) return res;
   else return factorial(x-1,x*res);
}


//reordering functions to avoid warning and errors
#include<stdio.h>
int factorial(int x, int res){
   if(x==1 || x==0) return res;
   else return factorial(x-1,x*res);
}
int auxFunc(int x){
    return factorial(x,1);
}
int main(){
    int n;
    int result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = auxFunc(n); 
    printf("Factorial = %ld",result);
    return 0;
}

