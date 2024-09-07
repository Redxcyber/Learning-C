//print increasing numbers from N to 1 using recursion

#include<stdio.h>
void increasing(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}

// method 1
void increasing(int n){
    if(n==1){
        printf("%d ",n);
    }else{
        increasing(n-1);
        printf("%d ",n);   //here we print after recursive call --> it will print in reverse order becz statement after recursive call will wait until last recursive call didn't get return
    }
}




/*--> method 1(another way)

    void increasing(int n){
        if(n==0) return;    //base case
        increasing(n-1);    //recursive call
        printf("%d ",n);    //code
        return;
    }

    //if we print after recursive call, it will print in reverse order

*/

