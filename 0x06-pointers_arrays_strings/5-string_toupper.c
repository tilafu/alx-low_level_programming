#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] -= 32;
	}
	return (c);
}
