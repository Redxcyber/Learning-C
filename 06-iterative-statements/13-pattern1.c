/* solid rectangle
    
    *  *  *  *  *  *
    *  *  *  *  *  *
    *  *  *  *  *  *
    
*/

#include<stdio.h>
void main(){
    int i,j,r,c;
    printf("enter no of row : ");
    scanf("%d",&r);
    printf("enter no of column : ");
    scanf("%d",&c);
    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            printf(" * ");
        }
        printf("\n");
    }
}