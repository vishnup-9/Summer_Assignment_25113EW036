/* Q76 Write a program to Find diagonal sum. */

#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, sum = 0;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (i == j)
                sum += a[i][j];
    printf("Sum of the diagonal elements: %d\n", sum);
    return 0;
}