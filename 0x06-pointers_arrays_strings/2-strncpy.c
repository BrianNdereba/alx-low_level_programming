#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 * Return: A pointer to the resulting destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x_bytes;

	for (x_bytes = 0; x_bytes < n && src[x_bytes] != '\0'; x_bytes++)
		dest[x_bytes] = src[x_bytes];
	for (; x_bytes < n; x_bytes++)
		dest[x_bytes] = '\0';
	return (dest);
}
