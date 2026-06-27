/* Q115 Write a program to Create menu-driven
string operations system. */

#include <stdio.h>
#include <string.h>

char str[100];

int main() {
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    do {
        printf("\n===== String Operations System =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("String: %s", str);
                break;
            case 2:
                printf("Length of string: %lu\n", strlen(str) - 1); // Subtract 1 to exclude newline character
                break;
            case 3:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 32;
                    }
                }
                printf("String in uppercase: %s", str);
                break;
            case 4:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32;
                    }
                }
                printf("String in lowercase: %s", str);
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}