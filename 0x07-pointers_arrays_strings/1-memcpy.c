#include "main.h"

/**
 * *_memcpy - Copies memory area from source to destination
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes from src
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
