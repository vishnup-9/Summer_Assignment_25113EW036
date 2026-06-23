/* Q92 Write a program to Find maximum occurring
character. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == '\n')
            continue;
        int count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    return 0;
}