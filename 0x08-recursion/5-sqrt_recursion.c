#include "main.h"
#include <stdio.h>


/* Function prototype */
int sqrt_helper(int n, int i);


/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does
 * not have a naural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function for _sqrt_recursion.
 *
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1
 * if n does not have a natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1); /* Return -1 if n is negative (error)*/
	else if (n == 0)
		return (0); /*Return 0 if n is 0 (base case) */
	else if (i * i > n)
		return (-1); /* Return -1 if i^2 is greater than */
				/* n (n does not have a natural square root) */
	else if (i * i == n)
		return (i); /* Return i if i^2 is equal to n */
			       /* (i is the natural square root of n) */
	else
		return (sqrt_helper(n, i + 1)); /* Recursive call to sqrt_helper function */
}
