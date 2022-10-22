#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		putchar((single_digit % 10) + '0');
		if (single_digit == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

