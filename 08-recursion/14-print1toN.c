//  increasing numbers from N to 1 using recursion

#include<stdio.h>
void increasing(int x, int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    increasing(1, n);
    return 0;
}

// method 2 (not precise than method 1)
void increasing(int x, int n){
    if(x>n) return;
    printf("%d ",x);
    increasing(x+1,n);
    return;
}


/*--> method-2(another way)

void increasing(int x, int n){
    if(x==n){
        printf("%d",x);
    }else{
        printf("%d ",x);
        increasing(x+1,n);
    }
}

*/


