/* Q74 Write a program to Subtract matrices. */

#include <stdio.h>
int main() {
    int a[10][10], b[10][10], diff[10][10], r, c, i, j;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];
    printf("Difference of the matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d\t", diff[i][j]);
        printf("\n");
    }
    return 0;
}