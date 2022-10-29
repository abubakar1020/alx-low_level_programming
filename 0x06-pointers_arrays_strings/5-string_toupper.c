#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *@n:char
 *
 * Return: char
 */
char *string_toupper(char *n)
{
	int str;

	for (str = 0; n[str] != '\0'; str++)
	{
		if (n[str] >= 'a' && n[str] <= 'z')
			n[str] = n[str] - 32;
	}
	return (n);
}
