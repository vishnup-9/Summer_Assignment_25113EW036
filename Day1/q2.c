/* Q2 Write a program to Print multiplication table of
a given number */

#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("The multiplication table of %d:\n",n);
    for(int i= 1; i<=10; i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}