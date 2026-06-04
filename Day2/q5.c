/* Q5 Write a program to Find sum of digits of a
number */

#include <stdio.h>

int main(){
    int n, rem, sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        sum += rem;
        n/= 10;
    }
    printf("The sum of digits of the entered number is %d",sum);
    return 0;
}       