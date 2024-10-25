#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);

    int counter=0;
    if(n<2){
        counter++;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                counter++;
                break;
            }
        }
    }   
    
    if(counter==0) printf("%d is prime\n",n);
    else printf("%d is not prime\n",n);
    return 0;
}