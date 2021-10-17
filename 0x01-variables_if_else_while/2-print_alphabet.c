#include <stdio.h>
#include <string.h>

/**
 * main - prints alphabet in lower case.
 *
 * Return: 0 if sucessesful else another number.
 */

int main(void)
{
	char tp[] = "abcdefghijklmnopqrstuvwxyz\n";
	int l, i;

	l = strlen(tp);
	for (i = 0; i < l; i++)
	{
		putchar(tp[i]);
	}
	return (0);
}
