#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; a++)
		_putchar((number % 10) + '0');
	_putchar('\n');
}
