#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tells info about the last digit of a number.
 *
 * Return: 0 if sucessesful else another num.
 */
int main(void)
{
	int ld;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %d is %d and is ", n, ld);
	if (ld == 0)
	{
		printf("0\n");
	} else if (ld < 6 && ld != 0)
	{
		printf("less than 6 and not 0\n");
	} else
	{
		printf("greater than 5\n");
	}

	return (0);
}
