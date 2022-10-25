#include "main.h"

/**
 * print_rev - printing string in reverse order
 * @s: input
 *
 * Return:nil
 */
void print_rev(char *s)
{
	int checker = 0;

	while (checker >= 0)
	{
		if (s[checker] == '\0')
			break;
		checker++;
	}
	for (checker--; checker >= 0; checker--)
		_putchar(s[checker]);
	_putchar('\n');
}
