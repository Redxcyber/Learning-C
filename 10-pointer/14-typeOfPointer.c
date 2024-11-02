//type of pointers

#include<stdio.h>
int main(){
    //<<-----------------NULL-POINTER------------------------>>

    //null pointer does not point to any value, that is they do not point to any valid memory address
    //it is a logical error to dereference a null pointer
    //Null Pointer declaration syntax
    int *ptr1 = NULL;
    
    //you cancheck whether a pointer stores address of some variable or conatains null
    if(ptr1==NULL){
        printf("---> ptr1 does not point to any valid memory address\n");
    }

    //you can also initialise null pointer as below but first approach is better
    int *ptr2 = 0;


    //<<-----------------VOID-POINTER------------------------>>

    //generic or void pointer has void as its data type
    //void pointer can be used to point to variable of any data type
    //declaration
    void *ptr3;

    //since in C we can not have a variable of type void, therefore void pointer will not point to any data and thus can not be dereferenced
    //you need to type cast void pointer to another lind of pointer before using it
    //void pointers are used when you want a pointer to point to data of different type at different time

    int x=10;
    char ch='A';
    void *gp;
    gp = &x;
    printf("\n--->generic pointer point to the int value = %d\n",*(int*)gp);
    gp = &ch;
    printf("--->generic pointer point to the char value = %c\n",*(char*)gp);

    //it is always recommended to avoid using void pointers unless absolutely necessory, as they effectively allow you to avoid type checking

    return 0;
}