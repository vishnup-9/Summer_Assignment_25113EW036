/* Q18 Write a program to Check strong number. */

#include <stdio.h>

int main(){
    int n, temp, rem, sum =0, fac, i;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;
    while(temp>0){
        rem = temp%10;

        fac=1;
        for(i=1;i<=rem;i++){
            fac *= i;
        }
        sum+= fac;
        temp/=10;

    }
    if(sum == n){
        printf("Strong Number!");
    }
    else{
        printf("Not a Strong Number!");
    }

    return 0;
}