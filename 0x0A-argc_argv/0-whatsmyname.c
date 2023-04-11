#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program to the console
 * @argc: The number of arguements passed to the program
 * @argv: An array of strings containing the arguements
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	/* Suppress unused parameter warning */
	(void)argc;

	/* Print the name of the program */
	printf("%s\n", argv[0]);

	return (0);
}
