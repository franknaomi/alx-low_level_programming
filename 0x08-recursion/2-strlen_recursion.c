#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: char to check.
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s)
	{
		_print_rev_recursion(s + 1);
		n++;

		_putchar(n);
	}
}
