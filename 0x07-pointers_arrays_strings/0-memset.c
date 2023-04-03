#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Constant byte to be assigned to memory
 * @n: Number of bytes used in memory
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
