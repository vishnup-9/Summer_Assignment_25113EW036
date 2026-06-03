/* Q12 Write a program to Find LCM of two numbers. */

#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        gcd = y;
        y = x % y;
        x = gcd;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}