/* Q45 Write a program to Write function for
palindrome */
#include <stdio.h>

int palindrome(int n){
    int original = n;
    int reversed = 0;

    while(n!=0){
        int rem = n%10;
        reversed = reversed*10 + rem;
        n /= 10;
    }

    if(original == reversed){
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

    if(palindrome(num)){
        printf("%d is a palindrome.\n", num);
    }
    else{
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}