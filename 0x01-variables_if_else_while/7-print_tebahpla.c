#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in revers. 
 *
 * Return: 0 if sucessesful else another number. *
 */

int main(void)
{
	int i;
	char tp[] = "zyxwvutsrqponmlkjihgfedcba\n";
	int l = strlen(tp);

	for (i = 0; i < l; i++)
	{
	putchar(tp[i]);
	}
	return (0);
}

