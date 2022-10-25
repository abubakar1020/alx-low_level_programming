#include "main.h"

/**
 * _puts - printing a string and a new line
 * @str: input
 *
 * Return: no return value
 */
void _puts(char *str)
{
	int check = 0;

	while (check >= 0)
	{
		if (str[check] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[check]);
		check++;
	}
}
