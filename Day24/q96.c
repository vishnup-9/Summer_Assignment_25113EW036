/* Q96 Write a program to Find duplicate characters in a string. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int freq[256] = {0};
    int duplicateFound = 0;

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    printf("Duplicate characters: ");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            printf("%c ", i);
            duplicateFound = 1;
        }
    }

    if (!duplicateFound) {
        printf("None");
    }
    printf("\n");

    return 0;
}