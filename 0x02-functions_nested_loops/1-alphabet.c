#include "main.h"

/**
 * print_alphabet - main
 *
 * as described above the function prints lowercase letters
 *
 * Return: null
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
