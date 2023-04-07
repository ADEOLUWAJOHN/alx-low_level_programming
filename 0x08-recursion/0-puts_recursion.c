
#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed.
 *
 * Return: void.
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		putchar('\n'); /* print new line when string is empty */
		return;
	}
	putchar(*s); /* print the first character of the string */
	/* call _puts_recursion recursively with the next character of the string */
	_puts_recursion(s + 1);
}
