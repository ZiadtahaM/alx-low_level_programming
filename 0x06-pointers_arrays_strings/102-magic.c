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
    int *p;

    p = a + 2;
    printf("a[2] = %d\n", *(p - 1));
    *(void *)(&p + 31) = 98;
    printf("a[2] = %d\n", *(p - 1));
    return (0);
}
