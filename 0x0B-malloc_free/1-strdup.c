#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a duplicate of a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
int _putchar(char c);
char *_strdup(char *str)
{
	char *dup_str;
	int length = 0;


	if (str == NULL)
		return (NULL);


	while (str[length] != '\0')
		length++;


	dup_str = malloc(sizeof(char) * (length + 1));
	if (dup_str == NULL)
		return (NULL);

	for (int i = 0; i <= length; i++)
		dup_str[i] = str[i];
	return (dup_str);
}
