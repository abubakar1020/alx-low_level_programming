#include "main.h"

/**
 * rev_string -reverses a string
 * @s: input
 *
 * Return: astring in reverse order
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int checker, k;

	checker = 0;

	while (s[checker] != '\0')
	{
		checker++;
	}
	for (k = 0; k < checker; k++)
	{
		checker--;
		reverse = s[k];
		s[k] = s[checker];
		s[checker] = reverse;
	}
}
