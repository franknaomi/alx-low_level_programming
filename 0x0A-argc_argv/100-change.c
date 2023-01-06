#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: If argc not exactly two - 1.
 * Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		coins++;
		if (cents >= 25)
		{
			cents -= 25;
			continue;
		}
		if (cents >= 10)
		{
			cents -= 10;
			continue;
		}
		if (cents >= 5)
		{
			cents -= 5;
			continue;
		}
		if (cents >= 2)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
