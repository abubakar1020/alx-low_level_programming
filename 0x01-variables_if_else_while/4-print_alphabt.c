#include <stdio.h>

/**
 * main - printing alphabets in lower case
 *
 * Return:0
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
		putchar('\n');
		return (0);
}
