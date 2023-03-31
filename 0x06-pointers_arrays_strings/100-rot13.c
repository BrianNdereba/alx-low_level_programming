#include "main.h"
#include <stdio.h>

/**
 * *rot13 - Encodes a string using rot13
 * @c: String to be encoded
 * Return: Encoded string
 */

char *rot13(char *c)
{
	char alphabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphabet2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count;
	int len;

	for (len = 0; c[len] != '\0'; len++)
	{
		for (count = 0; count < 52 ; count++)
		{
			if (alphabet1[count] == c[len])
			{
				c[len] = alphabet2[count];
				break;
			}
		}
	}
	return (c);
}
