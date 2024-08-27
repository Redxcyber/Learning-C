#include<stdio.h>
int main(){

    for(int i=0; i<10; i++){
        printf("Pranav singh chandel");
    }


    for(; ; ){     // you can skip one, two or all expresion of for loop. If all exp are omitted it will become infinite loop
        printf("Pranav singh chandel");
    }


    for(int i=0, j=10; i<j; i++){    // you can initialise two loop variables simultaneously
        printf("%d. Pranav singh chandel\n",i);
    }



    for(int i=0, j=10; i<j; i++, j--){     // you can initialise and update two variables simultaneously
        printf("%d. Pranav singh chandel\n",i);
    }

    /*
        i,j  | condition | output
       ------|-----------|-------------------------
        0,10 | 0<10 => T | 0. Pranav singh chandel
        1,9  | 1<9 => T  | 1. Pranav singh chandel
        2,8  | 2<8 => T  | 2. Pranav singh chandel
        3,7  | 3<7 => T  | 3. Pranav singh chandel
        4,6  | 4<6 => T  | 4. Pranav singh chandel
        5,5  | 5<5 => F  | Loop terminates here 
    */



    /*
    # classification based on preknown iterations
        1. indefinite loops {we dont know how many times loop will iterate example: while and do while }
        2. definite loop {we know how many times loop will iterate example: for }

    #classification based on condition check
        1. entry controlled {also called pre-test example: while and for }
        2. exit controlled {also called post-check examples: do while}
    
    # classification based on preknown iterations and variable used 
        1. counter controlled loop
        2. sentinel controlled loop

    */


    return 0;
}