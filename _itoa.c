#include "holberton.h"
/**
 * _strrev -  Reverse a string
 *
 * @str: pointer
 * Return: pointer
 */
char *_strrev(char *str)
{
	int i;
	int len = 0;
	char c;

	if (!str)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
	}
	return (str);
}
/**
 * _itoa - function convert string to integer
 *
 * @i: integer to convert into string
 * @strout: buffer
 * @base: base especify the conversion base
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit, sign = 0;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}
	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
		i = i / base;
		str++;
	}
	if (sign)
		*str++ = '-';
	*str = '\0';
	_strrev(strout);
	return (strout);
}
