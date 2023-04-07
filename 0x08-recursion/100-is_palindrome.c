#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i, j;


	i = 0;
	j = strlen(s) - 1;


	while (i < j)
	{
		if (s[i] != s[j])
			return (0); /* Not a palindrome */


		i++;
		j--;
	}


	return (1); /* Palindrome */
}
