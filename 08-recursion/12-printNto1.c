// print decreasing numbers from N to 1 using recursion

#include<stdio.h>
void decreasing(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}

// method 1
void decreasing(int n){
    if(n==1){
        printf("%d ",n);
    }else{
        printf("%d ",n);
        decreasing(n-1);
    }
}


/*--> method 2

    void decreasing(int n){
        if(n==0) return;
        printf("%d ",n);
        decreasing(n-1);
        return;
    }

*/

