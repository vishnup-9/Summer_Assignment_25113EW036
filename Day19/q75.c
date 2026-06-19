/* Q75 Write a program to Transpose matrix. */

#include <stdio.h>
int main() {
    int a[10][10], trans[10][10], r, c, i, j;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[j][i] = a[i][j];
    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d\t", trans[i][j]);
        printf("\n");
    }
    return 0;
}