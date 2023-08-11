#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator with current time */

	n = rand() - RAND_MAX / 2; /* Generate a random number */

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}

	printf("\n");

	return (0);
}
