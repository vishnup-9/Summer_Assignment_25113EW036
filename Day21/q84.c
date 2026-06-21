/* Q84 Write a program to Convert lowercase to
uppercase. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++){
        str[i] = toupper(str[i]);
    }
    printf("Uppercase string is: %s", str);
    return 0;
}