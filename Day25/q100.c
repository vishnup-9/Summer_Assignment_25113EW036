/* Q100 Write a program to Sort words by length. */

#include <stdio.h>
#include <string.h>
void sortWordsByLength(char words[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                // Swap words[i] and words[j]
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {
    char words[][100] = {"apple", "banana", "kiwi", "grape", "orange"};
    int n = sizeof(words) / sizeof(words[0]);

    sortWordsByLength(words, n);

    printf("Sorted words by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}