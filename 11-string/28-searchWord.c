//search a word in text line manually and print its location

#include <stdio.h>
int main() {
    char text[100], word[20];
    int i, j, found;

    // Input the line of text
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Input the word to search
    printf("Enter the word to search: ");
    fgets(word, sizeof(word), stdin);

    // Remove newline characters if present
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            text[i] = '\0';
        }
    }
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == '\n') {
            word[i] = '\0';
        }
    }

    // Manually search for the word in the text
    for (i = 0; text[i] != '\0'; i++) {
        found = 1;
        for (j = 0; word[j] != '\0'; j++) {
            if (text[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        
        // If the word was found, print the position and exit
        if (found && word[j] == '\0') {
            printf("The word \"%s\" found at position: %d\n", word, i);
            return 0;
        }
    }

    // If the word was not found
    printf("The word \"%s\" not found in the text.\n", word);

    return 0;
}
