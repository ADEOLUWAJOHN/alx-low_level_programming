#include "main.h"
#include <stdio.h>


/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The value of x rated to the power of y, or -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Return =1 if y is negative (error) */
	else if (y == 0)
		return (1); /* Retrn 1 if y is 0 (base case) */
	else
		return (x * _pow_recursion(x, y - 1));
	/* Recursive cell to _pow_recursion function */
}
