#include "main.h"

/**
 * reverse_array - Reverses contents of an array of integers
 * @a: Array of integers
 * @n: Number of elements in array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int a_rev, x;

	n = n - 1;
	x = 0;
	while (x <= n)
	{
		a_rev = a[x];
		a[x++] = a[n];
		a[n--] = a_rev;
	}
}
