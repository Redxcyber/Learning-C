#include<stdio.h>
int main(){
    int n;
    printf("enter no of terms in series : ");
    scanf("%d",&n);
    
    int a=0, b=1, c;
    for(int i=0; i<n; i++){
        if(i<=1){
            c = i;
        }
        else{
            c = a+b;
            a = b;
            b = c;
        }
        printf("%d ",c);
    }

    //method-02
    int a=0, b=1, c;
    for(int i=1; i<=n; i++){
        if(i==1){
            c=a;
        }else if(i==2){
            c=b;
        }else{
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
    
    return 0;
}