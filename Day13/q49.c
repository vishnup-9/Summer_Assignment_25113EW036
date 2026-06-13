/* Q49 Write a program to Input and display array. */

#include <stdio.h>

int main() {
    int arr[100], i, n;

    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: \n",n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements of the array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}