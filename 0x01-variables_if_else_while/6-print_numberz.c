#include <stdio.h>

/**
 * main - prints numbers 0-9.
 *
 * Return: 0 if sucessesful else another number.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
