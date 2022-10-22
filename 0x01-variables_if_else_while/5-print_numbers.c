#include <stdio.h>

/**
 * main - printing all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int b10_num;

	b10_num = 0;

	while (b10_num < 10)
	{
		printf("%d", b10_num);
		b10_num++;
	}
	printf("\n");
	return (0);
}
