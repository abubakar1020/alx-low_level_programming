#include "main.h"

/**
 * swap_int - swapping the values of two integers
 * @a: first argument to be swapped
 * @b: seccond argument to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}
