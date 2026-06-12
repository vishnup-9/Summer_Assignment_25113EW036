/* Q46 Write a program to Write function for
Armstrong. */

#include <stdio.h>
#include <math.h>

int armstrong(int n){
    int original = n, digits = 0, sum = 0;

    int temp = n;
    while(temp != 0){
        digits++;
        temp /= 10;
    }
    while(n != 0){
        int rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }

    if(original == sum){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num)){
        printf("%d is an Armstrong number.\n", num);
    }
    else{
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}