#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5];

    a[2] = 1024;
    a[4] = 98;
    int *p;

    p = a + 4;
    printf("a[2] = %d\n", *(a + 2));
    printf("p[3] = %d\n", *(p - 3));
    return (0);
}
