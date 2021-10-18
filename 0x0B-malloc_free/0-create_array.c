#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - allocates space for an array.
 * @size: number of elts in array.
 * @c: sample char
 *
 * Return: a pointer to the head of the arrray or NULL if failed.
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * size);

	return (p);
}
