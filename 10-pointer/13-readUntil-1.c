//read number until -1 and print whether it is prime or composite

#include<stdio.h>
int main(){
    int num, *pnum=&num;
    do{
        int flag=0, *pflag=&flag; //declaration of flag inside do while loop is must because after each iteration value of flag must be zero
        printf("Enter number : ");
        scanf("%d",pnum);
        if(*pnum<2){
            printf("Neither prime nor composite\n");
        }else{
            for(int i=2; i<*pnum; i++){
                if((*pnum)%i==0){
                    flag++;
                    break;
                }
            }
            if(*pflag==1) printf("Composite\n");
            else printf("Prime\n");
        }
    }while(*pnum != -1);
    return 0;
}