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
	int length = strlen(s);
	int half_length = length / 2;
	int i;


	for (i = (0); i < half_length; i++)
	{
		if (s[i] != s[length - i - 1])
				return (0); /* Not a palindrome */
	}


	return (1); /* Palindrome */
}
