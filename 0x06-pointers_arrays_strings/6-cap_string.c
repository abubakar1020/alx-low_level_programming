#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @n: char
 *
 * Return: char
 */
char *cap_string(char *n)
{
	int a, b;
	int upper = 32;
	int separator[] = {',', ';', '.', '?', '"', '(', ')',
	'{', '}', ' ', '\n', '\t'};

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - upper;
		}

		upper = 0;

		for (b = 0; b <= 12; b++)
		{
			if (n[a] == separator[b])
			{
				b = 12;
				upper = 32;
			}
		}
	}
	return (n);
}
