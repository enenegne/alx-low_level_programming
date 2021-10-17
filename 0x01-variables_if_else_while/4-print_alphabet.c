#include <stdio.h>
#include <string.h>

/**
 * main - prints alphabet in lower case except q and e.
 *
 * Return: 0 if sucessesful else another number.
 */

int main(void)
{
	char tp[] = "abcdfghijklmnoprstuvwxyz\n";
	int l, i;

	l = strlen(tp);
	for (i = 0; i < l; i++)
	{
		putchar(tp[i]);
	}
	return (0);
}
