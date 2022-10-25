#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: input
 * @src: input
 *
 * Return: Nil
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	for (; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
