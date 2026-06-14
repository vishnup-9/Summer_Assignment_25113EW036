/* Q54 Write a program to Frequency of an element. */

#include <stdio.h>
int main(){
    int arr[100], n, i, key, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++){
        if (arr[i] == key){
            count++;
            }
        }
    if (count > 0){
        printf("Element %d occurs %d times in the array.\n", key, count);
        } else {
        printf("Element not found in the array.\n");
        }
    return 0;
}