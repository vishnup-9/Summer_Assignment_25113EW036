/* Q16 Write a program to Print Armstrong numbers
in a range. */

#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, temp1, temp2, rem, x, digits;
    printf("Enter lower bound of the range: ");
    scanf("%d", &start);
    printf("Enter upper bound of the range: ");
    scanf("%d", &end);

    printf("The Armstrong numbers in the given range:");
    for (int i = start; i <= end; i++)
    {
        digits = 0;
        temp1 = i;

        if (temp1 == 0)
        {
            digits = 1;
        }
        else
        {
            while (temp1 != 0)
            {
                digits++;
                temp1 /= 10;
            }
        }
        temp2 = i;
        x = 0;
        while (temp2 != 0)
        {
            rem = temp2 % 10;
            x += (int)pow(rem, digits);
            temp2 /= 10;
        }
        if (i == x)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}