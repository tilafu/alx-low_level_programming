#include "main.h"

/**
 * print_numbers - writes numbers from 0 to 9
 * Return: returns nothing
 */

void print_numbers(void)
{
	char d;

	for (d = '0'; d = '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
