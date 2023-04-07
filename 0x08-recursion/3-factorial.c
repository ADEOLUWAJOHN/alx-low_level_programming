#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The number to get the fractional of.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 if n is negative (error) */


	else if (n == 0)
		return (1); /* Return 1 if n is 0 (base case) */

	else
		return (n * factorial(n - 1)); /* Recursive call to factorial function */
}
