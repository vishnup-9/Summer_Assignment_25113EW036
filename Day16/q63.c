/* Q63 Write a program to Find pair with given sum. */

#include <stdio.h>
int main(){
    int n, arr[100], i, j, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum to find pairs for: ");
    scanf("%d",&sum);
    printf("Pairs with sum %d are:\n", sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}