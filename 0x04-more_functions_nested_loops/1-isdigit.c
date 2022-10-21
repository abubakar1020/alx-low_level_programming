#include "main.h"

/**
 * _isdigit - the function checks for 0-9 digits
 * @c: input character to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
