//largest number out of three numbers

#include<stdio.h>
int main(){
    int a,b,c;
    int *pa = &a, *pb = &b, *pc = &c;
    int max, *pmax = &max;
    printf("Enter three numbers : ");
    scanf("%d %d %d",pa,pb,pc);
    if(*pa > *pb && *pa > *pc){
        *pmax = *pa;
    }else if(*pb > *pc){
        *pmax = *pb;
    else{
        *pmax = *pc;
    }
    printf("largest number out of three entered = %d\n",*pmax);
    return 0;
}