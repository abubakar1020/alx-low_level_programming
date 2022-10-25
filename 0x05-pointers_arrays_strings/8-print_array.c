#include "main.h"
#include <stdio.h>

/**
 * print_array -printing n element of an array of integers
 * @a: input
 * @n: input
 *
 * Return:a and n
 */
void print_array(int *a, int n)
{
	for (int k = 0; k < (n - 1); k++)
	{
	printf("%d, ", a[k]);
	if (k == (n - 1))
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
