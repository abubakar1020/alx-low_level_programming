#include <stdio.h>

/**
 * main - printing hexadecimal number
 *
 * Return: 0
 */
int main(void)
{
	char hex_num;

	int num = 0;

	hex_num = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (hex_num <= 'f')
	{
		putchar(hex_num);
		hex_num++;
	}
	putchar('\n');
	return (0);
}
