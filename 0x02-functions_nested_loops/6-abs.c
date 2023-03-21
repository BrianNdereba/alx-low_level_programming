#include "main.h"

/**
 * _abs - Calculates the absolute value of integers
 * @x: Integer whose absolute value will be calculated
 * Return: Integer absolute value or zero
 */

int _abs(int x)
{
	if (x < 0)
	{
	int abs_val;

	abs_val = x * -1;
	return (abs_val);
	}
	return (x);
}
