/* Q38 Write a program to Print reverse pyramid.

*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>

int main() {
    int rows = 5, i, j;

    for(i = rows; i >= 1; i--) {

        // Print leading spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}