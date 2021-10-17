#include <stdio.h>
#include <string.h>

/**
 * main - prints base16 numbers in lower case.
 *
 * Return: 0 if sucessesful else another number.
 */

int main(void)
{
	char tp[] = "0123456789abcdef\n";
	int i;
	int l = strlen(tp);

	for (i = 0; i < l; i++)
	{
		putchar(tp[i]);
	}
	return (0);
}
