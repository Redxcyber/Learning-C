#include <stdio.h>
void main(){
    int a[4]={10,20,30,40};
    int *ptr;
    ptr = &a[0];
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",*(ptr+2));
    printf("%d\n",*(ptr+3));
    printf("-------------------------------------------------\n");
    printf("%d\n",ptr[0]);       //doubt = how ptr[0] is same as *ptr --> because we aassign &a[0] to ptr , for ease we can understand ptr = a(array-name)
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
}