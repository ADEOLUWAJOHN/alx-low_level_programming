
#include <studio.h>


/**
 *  _print_rev_recrsion - Prints a string in reverse.
 *  @s: Pointer to the string to point.
 */
void _print_rev_recursion(char *s)

{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
