/* Q7 Write a program to Find product of digits */

#include <stdio.h>

int main(){
    int n, rem, product = 1;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        product *= rem;
        n /= 10;
    }
    printf("The product of digits of the entered number is %d",product);
    return 0;
}