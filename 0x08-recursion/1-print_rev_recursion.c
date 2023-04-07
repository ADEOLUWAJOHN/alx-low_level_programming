
#include "main.h"
#include <stdio.h>


/**
 *  _print_rev_recrsion - Prints a string in reverse.
 *
 *  Description: This function takes a string as an
 *  input and recursively prints it in reverse order,
 *  starting from the last character in the string
 *  and ending with the first character.
 *
 *  @s: Pointer to the string to point.
 */
void _print_rev_recursion(char *s)

{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
