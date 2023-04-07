#include "main.h"
#include <stdio.h>


/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * Description: This function takes a string as input and recursively
 * prints it in reverse order by first calling itself with the next
 * character in the string until it reaches the null character indicating
 * the end of the string, then prints the characters in reverse order.
 *
 * @s: pointer to he string to print in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;


	_print_rev_recursion(s + 1);
	putchar(*s);
}
