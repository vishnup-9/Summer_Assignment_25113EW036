/* Q66 Write a program to Union of arrays */

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

    for (i = 0; i < n1; i++) {
        c[i] = a[i];
    }
    
    k = n1;
    for (j = 0; j < n2; j++) {
        int found = 0;
        for (i = 0; i < n1; i++) {
            if (b[j] == a[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            c[k++] = b[j];
        }
    }

    printf("Union of arrays: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}