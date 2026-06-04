/* Q15 Write a program to Check Armstrong number. */

#include <stdio.h>
#include <math.h>

int main(){
    int n, digits=0, temp, original, rem, x=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    original = n;
    temp = n;
    while(temp!=0){
        temp /= 10;
        digits++;
    }
    while(n!=0){
        rem = n%10;
        x += pow(rem,digits);
        n/= 10;
    }
    if(x==original){
        printf("Armstrong number!");
    }
    else{
        printf("Not an Armstrong number!");
    }
    return 0;
}   