#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s : s represent string
 * Return: length of string (value is i)
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
