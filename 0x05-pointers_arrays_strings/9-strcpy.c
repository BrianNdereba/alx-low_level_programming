#include "main.h"
#include <stddef.h>

/**
 * _strcpy - Copy from source to destination
 * @dest: Destination
 * @src: Source
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	if (dest == NULL)
	{
		return (NULL);
	}
	for (x = 0; src[x] = '\0'; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
