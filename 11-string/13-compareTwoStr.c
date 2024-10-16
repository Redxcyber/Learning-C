//compare two str taken from the user

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0;

    // Taking input from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            break;  // Exit the loop if characters differ
        }
        i++;
    }

    // Determine the result of comparison
    if (str1[i] == str2[i]) {
        printf("%s == %s\n",str1,str2);
        
    }else if (str1[i] < str2[i]) {
        printf("%s < %s\n",str1,str2);
        
    }else if (str1[i] > str2[i]) {
        printf("%s > %s\n",str1,str2);   
    }

    return 0;
}
