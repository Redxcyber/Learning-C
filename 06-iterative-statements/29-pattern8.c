/*
    Pass 1 - 1 2 3 4 5
    Pass 2 - 1 2 3 4 5
    Pass 3 - 1 2 3 4 5
    Pass 4 - 1 2 3 4 5
    Pass 5 - 1 2 3 4 5
*/

#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        printf("Pass %d - ",i);
        for(int j=1; j<=5; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}