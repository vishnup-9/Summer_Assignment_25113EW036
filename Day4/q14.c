/* Q14 Write a program to Find nth Fibonacci term. */

#include <stdio.h>

int main(){
    int n, i, first_term= 1, second_term= 1, third_term;
    printf("Enter 'n': ");
    scanf("%d",&n);
    if(n<=2){
        printf("'%d'th term of fibonacci series is: 1",n);
    }
    else if(n>2){
        
        for(i=3;i<=n;i++){
            third_term = first_term + second_term;
            first_term = second_term;
            second_term = third_term;
        }
        printf("'%d'th term of fibonacci series is: %d",n,third_term);
    }
    else{
        printf("INVALID");
    }    
    return 0;
}