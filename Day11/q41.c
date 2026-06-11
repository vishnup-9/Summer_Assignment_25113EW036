/* Q41 Write a program to Write function to find sum 
of two numbers. */

#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum of %d and %d is %d", x, y, sum(x, y));
    return 0;
}