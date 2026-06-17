/* Q67 Write a program to Intersection of arrays */

#include <stdio.h>
int main() {
    int a[100], b[100], c[200];
    int i, j, k, n1, n2;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    k = 0;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                c[k++] = a[i];
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}