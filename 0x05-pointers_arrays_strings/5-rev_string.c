#include "main.h"
/**
 * rev_string - function that reverses string
 * @s: char array string
 */

void rev_string(char *s)
{
	int i, c, i;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;

	for (i--, c = 0; c < 1 / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
