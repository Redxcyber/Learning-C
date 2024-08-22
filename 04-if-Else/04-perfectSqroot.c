#include <stdio.h>
#include <math.h>
void main() {
    int num, sqrRoot;
    printf("Enter a number : ");
    scanf("%d", &num);
    sqrRoot = sqrt(num);
    if (num == sqrRoot*sqrRoot) {
        printf("%d is perfect square of %d",num,sqrRoot);
    } else if (num != sqrRoot*sqrRoot) {
        printf("%d is not perfect square",num);
    } else {
        printf("invalid input !!");
    }

}