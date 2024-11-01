//sum and average of numbers from m to n using pointers

#include<stdio.h>
int main(){
    int m,n,sum=0;
    int *pm=&m, *pn=&n, *psum=&sum;
    float avg=0.0;
    float *pavg=&avg;
    printf("Enter m and n : ");
    scanf("%d %d",pm,pn);
    for(int i=m; i<=n; i++){
        *psum += i;
    }
    *pavg = (float)*psum/(n-m+1);
    printf("Sum = %d\n",*psum);
    printf("Avg = %.2f",*pavg);
    return 0;
}