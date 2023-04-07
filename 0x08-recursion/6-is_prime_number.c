#include "main.h"
#include <stdio.h>

int is_prime_helper(int n, int divisor);


/**
 * is_prime_number - Checks if a number is a prime number.
 *
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2) /* 0 and 1 are not prime numbers */
		return (0);

	return (is_prime_helper(n, 2));
	/* Call helper function to determine primality */
}


/**
 * is_prime_helper - Recursive helper function for is_prime_number.
 *
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)
		/* If n is divisible by the current divisor, it's not prime */
		return (0);
	else if (divisor > n / 2)
		/* If we've checked all possible divisors upto n/2, n is prime */
		return (1);
	else /* Otherwise, check the next divisor */
		return (is_prime_helper(n, divisor + 1));
}
