#include<stdio.h>
int main(){

    //input number
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    //count digits
    int digits=0;
    for(int i=num; i>0; i/=10){
        digits++;
    }

    //array declaration
    int arr[digits];

    //put number in array
    for(int i=num, j=0; i>0; i/=10, j++){
        int rem = i%10;
        arr[j] = rem;
    }

    //reverse the array
    int arrRev[digits];
    for(int i=digits-1, j=0; i>=0; i--, j++){
        arrRev[j] = arr[i];
    }

    //print word for digits
    for(int i=0; i<digits; i++){
        int value = arrRev[i];
        switch(value){
            case 0: printf("zero ");
                    break;
            case 1: printf("one ");
                    break;
            case 2: printf("two ");
                    break;
            case 3: printf("three ");
                    break;
            case 4: printf("four ");
                    break;
            case 5: printf("five ");
                    break;
            case 6: printf("six ");
                    break;
            case 7: printf("seven ");
                    break;
            case 8: printf("eight ");
                    break;
            case 9: printf("one ");
                    break;
            default: printf("Invalid digit !!");
        }
    }

    return 0;
}