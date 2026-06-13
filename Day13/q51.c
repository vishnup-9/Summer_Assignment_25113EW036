/* Q51 Write a program to Find largest and smallest
element. */

#include <stdio.h>

int main() {
    int arr[100], i, largest, smallest, n;

    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);
    printf("Smallest element in the array is: %d\n", smallest);

    return 0;
}
