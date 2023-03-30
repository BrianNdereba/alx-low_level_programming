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
	int x = 0;
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (x = 0; x && src[x] < n; x++)
	{
		dest[dest_len++] = src[x];
	}
	return (dest);
}
