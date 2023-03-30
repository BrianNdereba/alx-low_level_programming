#include "main.h"

/**
 * *leet - Encodes a string to 1337
 * @c: String to be encoded
 * Return: Encoded string
 */

char *leet(char *c)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int count = 0;
	int len = 0;

	while (c[len] != '\0')
	{
		while (count < 10)
		{
			if (letters[count] == c[len])
			{
				c[len] = numbers[count];
			}
			count++;
		}
		len++;
	}
	return (c);
}
