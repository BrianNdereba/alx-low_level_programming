#include "main.h"

/**
 * reset_to_98 - Resets the value of an integer to 98
 * @x: Integer to be reset
 * @*n: Pointer to the  integer value to be reset
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int x;
	*n = &x;

	*n = 98;
}
