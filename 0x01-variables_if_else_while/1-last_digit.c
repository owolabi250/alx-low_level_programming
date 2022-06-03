#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0))
		n = rand() - RAND_MAX / 2;
	/* code goes here*/
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("%d is positive\n", n);
	}
	else if	(lastdigit == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
