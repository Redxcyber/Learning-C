//search a word in a text line and print its location

#include <stdio.h>
#include <string.h>
int main() {
    char text[100], word[20];
    
    // Input the line of text
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character if present
    text[strcspn(text, "\n")] = '\0';

    // Input the word to search
    printf("Enter the word to search: ");
    fgets(word, sizeof(word), stdin);

    // Remove newline character if present
    word[strcspn(word, "\n")] = '\0';

    // Search for the word in the text
    char *pos = strstr(text, word);
    if (pos != NULL) {
        // Calculate the position of the word
        int location = pos - text;
        printf("The word \"%s\" found at position: %d\n", word, location);
    }
    else {
        printf("The word \"%s\" not found in the text.\n", word);
    }

    return 0;
}
