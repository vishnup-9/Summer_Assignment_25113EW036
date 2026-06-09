/* Q33 Write a program to Print reverse star pattern. 
***** 
**** 
*** 
** 
*  */

#include <stdio.h>

int main(){
    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}