/* Q71 Write a program to Binary search.  */

#include <stdio.h>
int main() {
    int a[100], n, i, key, low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (low <= high) {
        if (a[mid] < key) {
            low = mid + 1;
        } else if (a[mid] == key) {
            printf("%d found at index %d\n", key, mid);
            break;
        } else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }

    if (low > high) {
        printf("%d not found in the array\n", key);
    }

    return 0;
}