/* Q48 Write a program to Write function for perfect
number. */

#include <stdio.h>
int perfect(int n){
    int sum = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
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

    if(perfect(num)){
        printf("%d is a perfect number.\n", num);
    }
    else{
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}