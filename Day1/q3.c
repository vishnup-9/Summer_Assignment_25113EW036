/* Q3 Write a program to Find factorial of a number */

#include <stdio.h>

int main(){
    int n, fac = 1;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n==0){
        printf("0! = 1");
    }
    else if(n>0){
        for(int i =1; i<=n; i++){
            fac *=i;
        }
        printf("%d! = %d",n,fac);
    }
    else{
        printf("Enter a number >= 0");
    }
    return 0;
}