//print all even number from m to n using pointers

#include<stdio.h>
int main(){
    int m,n;
    int *pm=&m, *pn=&n;
    printf("Enter m and n : ");
    scanf("%d %d",pm,pn);
    for(int i=*pm; i<*pn; i++){
        if(i%2==0) printf("%d ",i);
    }
    return 0;
}