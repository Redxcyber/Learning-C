#include <stdio.h>
int main() {
    int a, b, c, second_largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic to find the second largest number
    if ((a > b && a < c) || (a > c && a < b)) {
        second_largest = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        second_largest = b;
    } else {
        second_largest = c;
    }

    // Output the result
    printf("Second largest : %d\n", second_largest);

    return 0;
}
