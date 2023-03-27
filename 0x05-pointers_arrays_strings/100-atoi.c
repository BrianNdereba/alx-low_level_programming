#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted to an integer
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int x, y, z, len, j, value;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	j = 0;
	value = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && j == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			value = s[x] - '0';
			if (y % 2)
				value = -value;
			z = z * 10 + value;
			j = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);
	return (z);
}

