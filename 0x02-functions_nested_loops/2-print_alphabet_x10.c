#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count;
	char alphabet;

	for (count = 0; count <= 9; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
	_putchar('\n');
	}
}
