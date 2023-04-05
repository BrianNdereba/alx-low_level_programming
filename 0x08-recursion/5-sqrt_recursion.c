#include "main.h"

int _sqrt(int n, int x);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 * Return: Square root of a number, else -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 2));
	}
}

/**
 * _sqrt - Returns the square root if a number
 * @n: Number
 * @x: Checker
 * Return: Square root of a number, else -1
 */

int _sqrt(int n, int x)
{
	if (n <= 1)
	{
		return (n);
	}
	else if (n < (x * x))
	{
		return (-1);
	}
	else if (n == (x * x))
	{
		return (x);
	}
	else
	{
		return (_sqrt(n, (x + 1)));
	}
}
