#include "main.h"
/**
 * print_alphabet_x10 - prin alphabet 10 times
 *
 * Return: Aways return 0.
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
