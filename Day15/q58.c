/* Q58 Write a program to Rotate array left. */

#include <stdio.h>
int main(){
    int arr[100], n, i, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements of array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);
    printf("Array after left rotation:\n");
    for(i=d;i<n;i++){
        printf("%d ", arr[i]);
    }
    for(i=0;i<d;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}