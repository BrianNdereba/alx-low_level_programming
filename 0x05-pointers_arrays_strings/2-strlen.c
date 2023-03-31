#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: String to be checked
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
