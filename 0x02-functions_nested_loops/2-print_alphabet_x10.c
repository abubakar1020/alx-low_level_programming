#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alphabet;

	alphabet = 'a';
	
	int count;

	count = 0;

	while (count <= 9)
	{
		while (alphabet <= 'z')
		{
			alphabet++;
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
