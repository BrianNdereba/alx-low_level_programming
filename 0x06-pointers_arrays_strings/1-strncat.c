#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum bytes to be used from source
 * Return: A pointer to the resulting destination string
 */

char *_strcat(char *dest, char *src, int n)
{
	int x;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++; dest_len++)
	{
		dest[dest_len] = src[x];
	}
	dest[dest_len + x] = '\0';
	return (dest);
}
