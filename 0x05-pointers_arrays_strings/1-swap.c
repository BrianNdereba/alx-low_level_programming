#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer to be swapped
 * @b: Integer to be swapped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
