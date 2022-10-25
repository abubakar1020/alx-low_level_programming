#include "main.h"

/**
 * puts_half -printing second half of a string
 * @str: input
 *
 * Return: Nil
 */
void puts_half(char *str)
{
	int checker, n;

	checker = 0;

	while (checker >= 0)
	{
		if (str[checker] == '\0')
			break;
		checker++;
	}
	if (checker % 2 == 1)
		n = checker / 2;
	else
		n = (checker - 1) / 2;
	for (n++; n < checker; n++)
		_putchar(str[n]);
	_putchar('\n');
}
