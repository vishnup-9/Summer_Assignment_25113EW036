/* Q99 Write a program to Sort names
alphabetically. */

#include <stdio.h>
#include <string.h>
void sortNames(char names[][50], int n) {
    char temp[50];

    // Sort the names using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names[j] and names[j + 1]
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}
int main() {
    char names[][50] = {"John", "Alice", "Bob", "Eve"};
    int n = sizeof(names) / sizeof(names[0]);

    sortNames(names, n);

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}