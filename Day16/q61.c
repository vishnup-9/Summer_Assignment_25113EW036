/* Q61 Write a program to Find missing number in
array. */

#include <stdio.h>
int main(){
    int n, i, arr[100], sum=0, total;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements (from 1 to %d):\n",n,n+1);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    total = (n+1)*(n+2)/2; // Sum of first n+1 natural numbers
    printf("The missing number is: %d\n", total - sum);
    return 0;
}