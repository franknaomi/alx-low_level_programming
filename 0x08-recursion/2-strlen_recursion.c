#include "main.h"
/**
 * _strlen_recursion - calculate length of string
 * @s: string to count
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
