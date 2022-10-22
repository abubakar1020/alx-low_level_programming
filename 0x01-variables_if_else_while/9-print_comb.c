#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int single_digit = 0;

	while (single_digit <= 9)
	{
		putchar((single_digit % 10) + '0');

		if (single_digit == 9)
		{
			continue;
		}
			single_digit++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

