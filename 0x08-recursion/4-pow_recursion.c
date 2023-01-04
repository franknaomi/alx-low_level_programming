#include "main.h"
/**
 * _pow_recursion - return value of x raised to y
 * @x: the first int
 * @y: the second int
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
