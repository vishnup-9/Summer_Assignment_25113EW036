/* Q70 Write a program to Selection sort */

#include <stdio.h>
int main() {
    int a[100], n, i, j, min_idx, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }

    printf("Sorted elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}