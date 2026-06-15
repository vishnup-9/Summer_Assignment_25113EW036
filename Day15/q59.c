/* Q59 Write a program to Rotate array right. */

#include <stdio.h>
int main(){
    int n, i, arr[100], d;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number of positions to move right: ");
    scanf("%d",&d);

    printf("Array after right rotation:\n");
    for(i=d;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<d;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}