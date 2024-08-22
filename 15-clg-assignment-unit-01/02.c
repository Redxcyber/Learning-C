//find SI and CI 

#include<stdio.h>
void main(){
   int P,R,T,A,SI,CI;
   printf("Enter principal amount : ");
   scanf("%d",&P);
   printf("Enter rate of interest : ");
   scanf("%d",&R);
   printf("Enter time in years : ");
   scanf("%d",&T);
   printf("NOTE : Amount is always greater than principal amount\n");
   printf("Enter amount : ");
   scanf("%d",&A);
   SI = P*R*T/100;
   CI = A-P;
   printf("Simple interest = %d\n",SI);
   printf("Compound interest = %d",CI);
 
}