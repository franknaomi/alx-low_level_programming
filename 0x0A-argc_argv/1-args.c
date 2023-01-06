#include <stdio.h>
/**
 * main - entry point
 * @argc: command line argument count
 * @argv: array of size argc
 * Return: 0 for success.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
