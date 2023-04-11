#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments passed to it
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int (i);

	/* Suppress unused parameter warning */
	(void)argc;

	/* Print each arguement on a new line */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);
}
