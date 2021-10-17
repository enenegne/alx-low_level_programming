#include <stdio.h>
#include <string.h>

/**
 * main - a program that prints a string.
 *
 * Return: 1 if sucessesful else another number.
 */

int main(void)
{
	char tp[] = "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n";
	int i;
	int l = strlen(tp);

	i = 0;
	while (i != l)
	{
		putchar(tp[i]);
		i++;
	}
	return (0);
}
