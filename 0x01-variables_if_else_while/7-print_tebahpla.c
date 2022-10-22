#include <stdio.h>

/**
 * main - printing alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char reverse_letter;

	reverse_letter = 'z';

	while (reverse_letter <= 'a')
	{
		putchar(reverse_letter);
		reverse_letter--;
	}
	putchar('\n');
	return (0);
}
