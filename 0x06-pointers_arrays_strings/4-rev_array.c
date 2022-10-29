#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array
 * @a: int
 * @n: int
 *
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int store;

	for (i = 0; i < n; i++)
	{
		n--;
		store = a[i];
		a[i] = a[n];
		a[n] = store;
	}
}
