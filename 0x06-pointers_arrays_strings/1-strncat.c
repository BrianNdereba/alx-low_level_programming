#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum bytes from c to be used
 * Return: A pointer to the resulting destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';
	return (dest);
}
