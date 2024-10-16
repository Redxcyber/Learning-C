//compare two str taken from the user

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, result = 0;

    // Taking input from the user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings character by character
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            // If characters differ, we compare based on their ASCII values
            if (str1[i] < str2[i]) {
                result = -1; // str1 is lexicographically smaller
            } else {
                result = 1;  // str1 is lexicographically greater
            }
            break;
        }
        i++;
    }

    // If no difference was found, check for length differences
    if (result == 0) {
        if (str1[i] == '\0' && str2[i] != '\0') {
            result = -1; // str1 is shorter, thus lexicographically smaller
        } else if (str1[i] != '\0' && str2[i] == '\0') {
            result = 1;  // str2 is shorter, thus str1 is lexicographically greater
        }
    }

    // Output the comparison result
    if (result == 0) {
        printf("%s == %s\n",str1,str2);
        printf("The strings are equal.\n");

    } else if (result < 0) {
        printf("%s < %s\n",str1,str2);
        printf("The first string is lexicographically smaller.\n");

    } else {
        printf("%s > %s\n",str1,str2);
        printf("The first string is lexicographically greater.\n");
    }

    return 0;
}
