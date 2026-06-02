/* Q8 Write a program to Check whether a number is
palindrome. */

#include <stdio.h>

int main(){
    int n, rem, rev = 0, temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        rem= n%10;
        rev = rem + rev*10;
        n /= 10;
    }
    if(rev==temp){
        printf("Palindrome number!");
    }
    else{
        printf("Not a Palindrome number!");
    }
    return 0;
}