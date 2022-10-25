#include "main.h"

/**
 * _strlen -finding the lenght of a string
 * @s: string pointer to the string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int pointer = 0;

	while (*(s + pointer) != 0)
	{
		pointer++;
	}
	return (pointer);
}

