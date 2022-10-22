#include <stdio.h>

/**
 * main - printing all single digits of base 10
 *
 * Return: 0
 */
int main(void)
{
	int num_base;

	num_base = 0;

	while (num_base < 10)
	{
		putchar((num_base % 10) + '0');
		num_base++;
	}
	putchar('\n');
	return (0);
}
