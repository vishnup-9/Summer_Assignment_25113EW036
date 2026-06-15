/* Q60 Write a program to Move zeroes to end. */

#include <stdio.h>
int main(){
    int arr[100], n, i, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count < n){
        arr[count] = 0;
        count++;
    }
    printf("Array after moving zeroes to end: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}