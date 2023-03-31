#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements in array
 * @a: Array
 * @n: elemets in array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}

