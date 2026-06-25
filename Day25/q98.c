/* Q98 Write a program to Find common characters
in strings. */

#include <stdio.h>
void findCommonCharacters(char str1[], char str2[]) {
    int freq1[256] = {0};
    int freq2[256] = {0};

    // Count frequency of characters in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }

    // Count frequency of characters in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            printf("%c ", i);
        }
    }
    printf("\n");
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";

    findCommonCharacters(str1, str2);

    return 0;
}