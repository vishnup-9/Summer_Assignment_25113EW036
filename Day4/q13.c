/* Q13 Write a program to Generate Fibonacci series.  */

#include <stdio.h>

int main(){
    int n, i, first_term= 1, second_term= 1, third_term;
    printf("Enter number of terms of Fibonacci series: ");
    scanf("%d",&n);
    printf(" First %d terms of Fibonacci series: ",n);
    if(n>=1){
        printf("%d ",first_term);
    }
    if(n>=2){
        printf("%d ",second_term);
    }
        for(i=3;i<=n;i++){
            third_term = first_term + second_term;
            printf("%d ",third_term);
            first_term = second_term;
            second_term = third_term;
        }
    return 0;
}