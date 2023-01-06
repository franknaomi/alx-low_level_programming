#include <stdio.h>
/**
 * main - program's entry point.
 * @argc: command line argument count.
 * @argv: array of size argc.
 * Return: 0 don success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
