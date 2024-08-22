/* 
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter n : ");
    scanf("%d",&n);

    int a = n;
    for(i=1; i<=n; i++){      
        for(j=1; j<=a; j++){ // tutorial method
            printf("* ");
        }
        a--;
        printf("\n");
    }
}