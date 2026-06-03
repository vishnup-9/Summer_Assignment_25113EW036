/* Q10 Write a program to Print prime numbers in a
range */

#include <stdio.h>

int main(){
    int start, end, i, j, prime;
    printf("Enter the lower bound of the range: ");
    scanf("%d",&start);
    printf("Enter the upper bound of the range: ");
    scanf("%d",&end);
    
    printf("Prime numbers between %d and %d are: ",start,end);
    for(i= start; i<= end; i++){
        if(i<=1){
            continue;
        }
        prime = 1;
        for(j=2; j*j <= i; j++){
            if(i%j==0){
                prime =0;
                break;
            }
        }
        if(prime == 1){
            printf("%d ",i);
        }
    }
    return 0;
}