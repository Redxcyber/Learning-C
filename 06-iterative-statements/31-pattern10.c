/*
    0
    1 2
    3 4 5
    6 7 8 9
*/

#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", count++);
        }
        printf("\n");
    }
    return 0;
}