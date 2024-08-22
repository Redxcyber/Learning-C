/*
    1  2  3  4  5 
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
    1  2  3  4  5
*/

#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter n : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){          // no of rows -> i
        for(j=1; j<=n; j++){      // no of columns -> j
            printf(" %d ",j);
        }
        printf("\n");
    }
}