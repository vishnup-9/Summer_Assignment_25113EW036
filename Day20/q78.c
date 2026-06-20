/* Q78 Write a program to Check symmetric matrix. */

#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, flag = 1;

    printf("Enter rows and columns for matrix: ");
    scanf("%d %d", &r, &c);

    if (r != c)
    {
        printf("Matrix is not symmetric as it is not square.");
        return 0;
    }

    printf("\nEnter elements of matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }

    if (flag)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");

    return 0;
}