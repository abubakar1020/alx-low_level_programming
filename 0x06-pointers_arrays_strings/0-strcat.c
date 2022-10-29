#include "main.h"
#include <stdio.h>
i
/**
 *_strcat - concatenating two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *t = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (t);
}
