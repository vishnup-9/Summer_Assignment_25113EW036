/* Q50 Write a program to Find sum and average of
array */

#include <stdio.h>

int main() {
    int arr[100], i, sum = 0, n;
    float average;

    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum of the array elements is: %d\n", sum);
    printf("Average of the array elements is: %.2f\n", average);

    return 0;
}