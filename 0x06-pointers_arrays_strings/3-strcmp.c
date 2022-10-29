#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: char
 * @s2: char
 *
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	int num = 0;

	while (s1[num] != '\0' && s2[num] != '\0')
	{
		num++;
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
	}
	return (0);
}
