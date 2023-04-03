#include "main.h"

/**
 * *_strstr - Locates a substring
 * @haystack: String to be checked
 * @needle: Substring to be located in haystack
 * Return: A pointer to the beginning of the located substring, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		if (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		else
		{
			return (haystack);
		}
	}
	return (0);
}
