//print number from N to 1 then again 1 to N --> if n=4; output = 4 3 2 1 2 3 4 

#include<stdio.h>
void dec_inc(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    dec_inc(n);
    return 0;
}

// method 1
void dec_inc(int n){
    if(n==1){
        printf("%d ",n);
    }else{
        printf("%d ",n);  // here we print before recursive call --> it will print number before every recursive call
        dec_inc(n-1);
        printf("%d ",n);  // here we print after recursive call --> it will print in reverse order becz statement after recursive call will wait until last recursive call didn't get return
    }
}




/*--> method 1(another way)

    void dec_inc(int n){
        if(n==0) return;    //base case
        printf("%d ",n);    //code

        dec_inc(n-1);       //recursive call

        printf("%d ",n);    //code
        return;
    }

*/

