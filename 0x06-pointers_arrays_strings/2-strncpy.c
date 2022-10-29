#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  copies a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num;

	num = 0;

	while (src[num] != '\0')
	{
		num++
			if (num < n)
				dest[num] = src[num];
	}
	while (num < n)
		dest[num++] = '\0';
	return (dest);
}
