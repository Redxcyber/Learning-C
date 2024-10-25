//sum of two numbers using recursion

#include <stdio.h>
int recursiveSum(int a, int b) {
    if (b == 0) 
        return a;
    else 
        return recursiveSum(a + 1, b - 1);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = recursiveSum(num1, num2);
    printf("Sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}