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

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
