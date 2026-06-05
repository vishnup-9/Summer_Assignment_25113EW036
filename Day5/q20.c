/* Q20 Write a program to Find largest prime factor. */

#include <stdio.h>

int main(){
    int n, temp, i, largestfactor=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp =n;

    for( i=2; i<=n; i++){
        while(n%i==0){
            largestfactor= i;
            n/=i;
        }
        
    }
    printf("The largest prime factor of %d is: %d",temp,largestfactor);

    return 0;
}