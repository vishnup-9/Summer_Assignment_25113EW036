/* Q6 Write a program to Reverse a number */

#include <stdio.h>

int main(){
    int n, rem, rev = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        rev = rem + rev*10;
        n/=10;
    }
    printf("The reversed number: %d",rev);
    return 0;
}