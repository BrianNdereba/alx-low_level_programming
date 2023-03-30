#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: Negative integer if s1 is less than s2,
 *         0 if s1 is equal to s2,
 *         Positive integer if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (s1[x] - s2[x]);
}

