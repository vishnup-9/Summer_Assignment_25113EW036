/* Q52 Write a program to Count even and odd
elements. */

#include <stdio.h>

int main() {
    int arr[100], i, even = 0, odd = 0, n;

    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}