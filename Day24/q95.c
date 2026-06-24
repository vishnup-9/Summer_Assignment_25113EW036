/* Q95 Write a program to Find longest word. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char longestWord[100] = "";
    char word[100];
    int maxLength = 0;

    char *token = strtok(str, " \n");
    while (token != NULL) {
        int len = strlen(token);
        if (len > maxLength) {
            maxLength = len;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \n");
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}