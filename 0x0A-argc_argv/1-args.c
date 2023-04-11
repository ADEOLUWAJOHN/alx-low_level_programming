#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	/* Suppress unused parameter warning */
	(void)argv;

	/* Print the number of arguments */
	printf("%d\n", argc - 1);

	return (0);
}
