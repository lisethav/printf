#include "holberton.h"

/**
 * _strlen - computes the length of the string s. No inclue the null char
 * @s:the string whose length is to be found.
 *
 * Return: This function returns the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
