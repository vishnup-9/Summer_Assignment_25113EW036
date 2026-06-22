/* Q86 Write a program to Count words in a
sentence. */

#include <stdio.h> 
int main() 
{ 
    char str[100]; 
    int i, words = 1; 

    printf("Enter a sentence: "); 
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    { 
        if (str[i] == ' ' && str[i + 1] != ' ') 
            words++; 
    } 

    printf("Number of words in the sentence: %d\n", words); 

    return 0; 
}