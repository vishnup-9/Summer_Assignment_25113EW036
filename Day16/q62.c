/* Q62 Write a program to Find maximum frequency
element. */

#include <stdio.h>
int main(){
    int n, i, j, arr[100], freq[100], max_freq=0, max_elem;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        freq[i] = count;
        if(freq[i] > max_freq){
            max_freq = freq[i];
            max_elem = arr[i];
        }
    }
    printf("The element with maximum frequency is: %d\n", max_elem);
    printf("Frequency: %d",max_freq);
    return 0;
}