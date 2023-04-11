#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if the program ran successfully, 1 otherwise
 */
int get_coins(int cents, int coin_value);

int main(int argc, char *argv[])
{
	int coins = 0, cents;

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


	coins += get_coins(cents, 25);
	coins += get_coins(cents, 10);
	coins += get_coins(cents, 5);
	coins += get_coins(cents, 2);
	coins += get_coins(cents, 1);


	printf("%d\n", coins);
	return (0);
}

/**
 * get_coins - calculates the number of coins needed for a specific value
 *
 * @cents: the remaining amount of cents
 * @coin_value: the value of the coin to use
 *
 * Return: the number of coins needed for the specified value
 */
int get_coins(int cents, int coin_value)
{
	int coins = 0;

	while (cents >= coin_value)
	{
		coins++;
		cents -= coin_value;
	}


	return (coins);
}
