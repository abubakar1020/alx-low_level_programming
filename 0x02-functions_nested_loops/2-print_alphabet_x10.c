#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet = 'a';

	while (count <= 9)
	{
		count++;
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	}
	_putchar('\n');
}
