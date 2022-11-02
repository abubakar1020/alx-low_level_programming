#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: input
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(1 + s);
	_putchar('\n');
}
