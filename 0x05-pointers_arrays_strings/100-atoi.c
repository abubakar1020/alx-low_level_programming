#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: input
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int n, p, m, length, f, number;

	p = 0;
	m = 0;
	n = 0;
	length = 0;
	f = 0;
	number = 0;

	while (s[length] != '\0')
		length++;
	while (p < length && f == 0)
	{
		if (s[p] == '-')
			++m;
		if (s[p] >= '0' && s[p] <= '9')
		{
			number = s[p] - '0';
			if (m % 2)
				number = -number;
			n = n * 10 + number;
			f = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			f = 0;
		}
		p++;
	}
	if (f == 0)
		return (0);

	return (n);
}

