#include "main.h"

/**
 * rot13 - rotate characters 13 places in alphabe
 * @s: string
 * Return: string 's' rotated
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0, j = 0; s[i] != '\0', alpha[j] != '\0'; i++, j++)
	{
		if (s[i] == alpha[j])
			s[i] = cipher[j];
		break;
	}
	return (s);
}
