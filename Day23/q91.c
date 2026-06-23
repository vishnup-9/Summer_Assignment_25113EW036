/* Q91 Write a program to Check anagram strings. */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1, len2;
    bool isAnagram = true;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; i < len1; i++)
    {
        if (str1[i] == '\n')
            continue;
        for (j = 0; j < len2; j++)
        {
            if (str2[j] == '\n')
                continue;
            if (str1[i] == str2[j])
            {
                str2[j] = '\0'; // Mark as used
                break;
            }
        }
        if (j == len2)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}