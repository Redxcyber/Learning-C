// print greeting n times 

#include<stdio.h>
void greeting(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}

/* method 1

    // void printName(int x){
    //     if(x==1){
    //         printf("%d. Pranav\n",x);
    //     }else {
    //         printf("%d. Pranav\n",x);
    //         printName(x-1);
    //     }
    // }
    
*/

void greeting(int n){
    if(n==0) return;
    printf("%d. good morning\n",n);
    greeting(n-1);
    return;
}

/* print greeting in ascending order i.e 1.gm , 2.gm , 3.gm , 4.gm
    void greeting(int n){
        if(n==0) return;
        greeting(n-1);
        printf("%d. good morning\n",n);
        return;
    }
*/


