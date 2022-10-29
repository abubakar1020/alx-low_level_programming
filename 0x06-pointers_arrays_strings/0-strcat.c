#include "main.h"

/**
 * *_strcat - concatenating two strings
 * @*dest: input
 * @*src: input
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; (dest[a + b] = *src++) != '\0'; b++)
	{
	}
	return (dest);
}
