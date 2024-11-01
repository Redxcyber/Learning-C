//Basic understanding regarding pointers

#include<stdio.h>
int main(){

    //syntax of pointer declaration
    int *pnum;
    char *pchar;
    float *pfloat;
    double *pdouble;

    //size of all pointers of diff data-type is same
    printf("integer pointer size = %d\n",sizeof(pnum));
    printf("character pointer size = %d\n",sizeof(pchar));
    printf("float pointer size = %d\n",sizeof(pfloat));
    printf("double pointer size = %d\n",sizeof(pdouble));

    printf("------------------------------------------------------>>>>1\n");

    //example of pointer variable
    int num1, *ptr1;
    ptr1 = &num1;
    num1 = 1510;
    printf("The value of num1 = %d\n",num1);
    printf("The value of num1 = %d\n",*ptr1);
    printf("The value of num1 = %d\n",*(&num1));
    printf("The address of num1 in decimal form = %u\n",ptr1);
    printf("The address of num1 in hexadecimal form = %p\n",ptr1);

    printf("------------------------------------------------------>>>>2\n");

    //assign value to variable using pointer variable and can modify thier value too
    int num2, *ptr2;
    ptr2 = &num2;
    *ptr2 = 2302;
    printf("The value of num2 = %d\n",num2);
    printf("The address of num2 in decimal form = %u\n",ptr2);
    printf("The address of num2 in hexadecimal form = %p\n",ptr2);

    *ptr2 = *ptr2 + 10; //modify value of num2 using ptr
    printf("The value of num2 after modification = %d\n",num2);
    printf("The address of num2 in decimal form = %u\n",ptr2);
    printf("The address of num2 in hexadecimal form = %p\n",ptr2);

    printf("------------------------------------------------------>>>>3\n");

    //IMPORTANT - any number of pointers can point to the same address
    int num3, *ptr3, *ptr4;
    ptr3 = &num3;
    *ptr3 = 10;
    ptr4 = ptr3;
    printf("value of num3 = ( %d %d %d )\n",num3, *ptr3, *ptr4);
    printf("address of num3 = ( %p %p %p )\n",&num3, ptr3, ptr4);

    printf("------------------------------------------------------>>>>4\n");

    //it is not necessory that a pointer variable will always point to the same variable throughout the program, pointer variable can point to any variable as long as data-type of poiner variable is same as the variable it points to
    int a=3, b=5;
    int *ptr5;
    ptr5 = &a;
    printf("a = %d\n",*ptr5);
    ptr5 = &b;
    printf("b = %d\n",*ptr5);

    printf("------------------------------------------------------>>>>5\n");

    //pointer expression and pointer arithmetic
    int num4=2, num5=4, *ptr6, *ptr7;
    ptr6 = &num4;
    ptr7 = &num5;

    //arithmetic operationa are valid
    printf("add = %d\n",*ptr6 + *ptr7);
    printf("sub = %d\n",*ptr6 - *ptr7);
    printf("mul = %d\n",*ptr6 * *ptr7);
    printf("div = %d\n",*ptr6 / *ptr7);

    //short hand operator are valid
    
    printf("\nnum4 = %d\n",*ptr6);
    *ptr6 += 1;
    printf("num4 = %d\n",*ptr6);
    *ptr6 *= 2;
    printf("num4 = %d\n",*ptr6);

    //relational operators are valid
    printf("%d\n",*ptr6 > *ptr7);
    printf("%d\n",*ptr6 >= *ptr7);
    printf("%d\n",*ptr6 < *ptr7);
    printf("%d\n",*ptr6 <= *ptr7);
    printf("%d\n",*ptr6 == *ptr7);
    printf("%d\n",*ptr6 != *ptr7);

    // unary increment & decrement are also valid
    // unary increment & decrement has higher precedence as compare to the dereference (*) operator
    // *ptr++ act as *(ptr++), because precedence of ++ operator is greater than * operator
    // therefore the expression increse the value of ptr and it will now point to the next memory location
    // this means that *ptr++ does not perform intended task
    // therefore, to increse the value of variable whose address is stored in ptr, you should write (*ptr)++

    int num6 = 69;
    int *ptr8 = &num6;
    printf("\nnum6 = %d\n",*ptr8);
    (*ptr8)++; //---> (*&num6)++ ---> (num6)++ ---> 70
    printf("num6 = %d\n",*ptr8);
    *ptr8++; //---> *(ptr8++) ---> *(&num6 + 1);
    printf("num6 = %d\n",*ptr8); //unexpected output






















    return 0;
}