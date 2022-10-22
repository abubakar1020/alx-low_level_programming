#include <stdio.h>

/**
 * main - printing hexadecimal number
 *
 * Return: 0
 */
int main(void)
{
	char hex_num;

	hex_num = 0;

	while (hex_num <= 'f')
	{
		putchar(hex_num);
		hex_num++;
	}
	putchar('\n');
	return (0);
}
