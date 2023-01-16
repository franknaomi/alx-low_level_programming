#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of the file of the program
 * it was compiled from, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
