#include <stdio.h>
#include <string.h>

/**
 * main - a program that prints numbers.
 *
 * Return: 0 if sucessesful else another number.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(' ');
		putchar(i);
		if (i != 57)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
