/* Q9 Write a program to Check whether a number is
prime. */

#include <stdio.h>

int main(){
    int n, prime = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n <= 1){
        prime = 0;
    }
    else{
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0){
                prime = 0;
                break;
            }
        }
    }
    if (prime == 0){
        printf("Not Prime!");
    }
    else{
        printf("Prime number!");
    }

    return 0;
}