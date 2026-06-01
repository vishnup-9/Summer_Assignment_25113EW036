/* Q4 Write a program to Count digits in a number */

#include <stdio.h>

int main(){
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!= 0){
        n /= 10;
        count++;
    }
    printf("No. of digits in entered number = %d",count);
    return 0;
}