//sum of first and last digit of a number taken from user

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for later use
    int original_num = num;

    // Count total digits in number
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    
    printf("Total number of digits = %d\n", count);

    // Sum of first and last digit
    int first_digit = original_num; // Start from the original number
    int last_digit = original_num % 10;

    // Extract the first digit
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    int sum = first_digit + last_digit;
    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}
