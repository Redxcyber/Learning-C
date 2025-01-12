#include <stdio.h>
int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Logic to print in ascending order
    if (a <= b && a <= c) {
        if (b <= c) {
            printf("Ascending order: %d %d %d\n", a, b, c);
        } else {
            printf("Ascending order: %d %d %d\n", a, c, b);
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            printf("Ascending order: %d %d %d\n", b, a, c);
        } else {
            printf("Ascending order: %d %d %d\n", b, c, a);
        }
    } else {
        if (a <= b) {
            printf("Ascending order: %d %d %d\n", c, a, b);
        } else {
            printf("Ascending order: %d %d %d\n", c, b, a);
        }
    }

    return 0;
}
