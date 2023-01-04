#include "main.h"
int _sqrt(int n, int min, int max);
/**
 * _sqrt_recursion - return natural square rooot of a number
 * @n: int to be squared
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 1, n));
}
/**
 * _sqrt - find square root
 * @n: int to be squared
 * @min: minimum value
 * @max: maximum value
 * Return: the square root
 */
int _sqrt(int n, int min, int max)
{
	int mid = (min + max) / 2;

	if (mid * mid == n)
		return (mid);
	if (min == max)
		return (-1);
	if (mid * mid > n)
		return (_sqrt(n, min, mid - 1));
	return (_sqrt(n, mid + 1, max));
}
