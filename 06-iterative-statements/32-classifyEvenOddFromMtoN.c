// take number m and n from user then categories all numbers from m to n as odd or even

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter m and n : ");
    scanf("%d %d",&m, &n);
    for(; m<=n; m++){
        if(m%2==0){
            printf("%d is even\n",m);
        }else if(m%2 != 0){
            printf("%d is odd\n",m);
        }else{
            printf("error\n");
        }
    }

    
    /*
    for(int i=m; i<=n; i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }else if(i%2 != 0){
            printf("%d is odd\n",i);
        }else{
            printf("error\n");
        }
    }
    */
    
    // both way are correct but i feel method-1 more explanatory

    return 0;
}