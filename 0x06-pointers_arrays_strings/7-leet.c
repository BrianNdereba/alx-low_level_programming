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
	int count;
	int len;

	for (len = 0; c[len] != '\0'; len++)
	{
		for (count = 0; count < 10; count++)
		{
			if (letters[count] == c[len])
			{
				c[len] = numbers[count];
			}
		}
	}
	return (c);
}
