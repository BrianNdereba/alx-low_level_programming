#include "main.h"

int _is_prime(int n, int x);

/**
 * is_prime_number - Returns 1 if integer is prime number else 0
 * @n: Integer
 * Return: 1 if integer is prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_is_prime(n, 2));
	}
}

/**
 * _is_prime - Checks whether integer is a prime number
 * @n: Integer
 * @x: Checker
 * Return: 1 if integer is prime number else 0
 */

int _is_prime(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	else if ((n % x) == 0)
	{
		return (0);
	}
	else
	{
		return (_is_prime(n, (x + 1)));
	}
}
