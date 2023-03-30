#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: A pointer to the resulting destination string
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (x = 0; src[x] != 0; x++)
	{
		dest[dest_len] = src[x];
		dest[x++];
	}
	dest[dest_len] = '\0';
	return (dest);
}
