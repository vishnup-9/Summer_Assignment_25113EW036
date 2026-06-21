/* Q82 Write a program to Reverse a string.  */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    strrev(str);
    printf("Reversed string is: %s", str);
    return 0;
}