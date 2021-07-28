#include "holberton.h"

/**
 * _strcat - Concatenates two strings: dest + src
 * @dest: pointer to the destination array
 * @src: this is the string to be appended.
 *
 * Return:This function returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (n = 0; n < j; n++)
	{
		dest[i + n] = src[n];
	}
	return (dest);
}
