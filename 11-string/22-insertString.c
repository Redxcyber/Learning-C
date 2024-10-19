//insert a string in to main string and store in in new str

#include<stdio.h>
#include<string.h>

int main(){
    char mainStr[100], str[30], newStr[130];
    int pos;

    printf("Enter main string: ");
    fgets(mainStr, 100, stdin);

    //Removes newline character from mainStr
    mainStr[strcspn(mainStr, "\n")] = '\0';

    printf("Enter string to be inserted: ");
    fgets(str, 30, stdin);

    //Removes newline character from str
    str[strcspn(str, "\n")] = '\0';

    printf("Enter position to insert the string: ");
    scanf("%d", &pos);

    int j = 0;

    //Copy the main string up to the position 'pos'
    for (int i = 0; i < pos; i++, j++) {
        newStr[j] = mainStr[i];
    }

    //Insert the string to be inserted
    for (int i = 0; str[i] != '\0'; i++, j++) {
        newStr[j] = str[i];
    }

    //Copy the remaining part of the main string
    for (int i = pos; mainStr[i] != '\0'; i++, j++) {
        newStr[j] = mainStr[i];
    }

    // Null-terminate the new string
    newStr[j] = '\0';

    //output  newStr
    printf("New string: %s\n", newStr);

    return 0;
}
