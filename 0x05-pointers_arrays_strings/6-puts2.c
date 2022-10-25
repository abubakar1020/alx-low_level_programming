#include "main.h"

/**
 * puts2 - printing every other chrcterof a string
 * @str: input
 *
 * Return:printing
 */
void puts2(char *str)
{
	int checker;

	checker = 0;

	while (checker >= 0)
	{
		if (str[checker] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (checker % 2 == 0)
			_putchar(str[checker]);
		checker++;
	}
}
