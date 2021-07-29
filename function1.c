#include "holberton.h"
/**
 * pr_char - Type char
 *
 * @arg: arguments
 * Return: 0.
*/
int pr_char(va_list arg) /* if (*p == 'c')*/
{
	char *s;
	char value;

	value = va_arg(arg, int); /*extracts int arg & stores as char type*/
	if (arg == NULL)
	{
		return (-1);
	}
	s = &value;
	write(1, s, 1);
	return (1);
}
/**
 * pr_string - string of chars
 *
 * @arg: arguments
 * Return: 0.
*/
int pr_string(va_list arg) /* if (*p == 's')*/
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		return (-1);
	}
	write(1, s, _strlen(s));
	return (_strlen(s));
}
/**
 * pr_perc - Type % specifier function
 *
 * @arg: argument
 * Return: 1.
 */
int pr_perc(va_list __attribute__((unused))arg) /* if (*p == '%') */
{
	char *s;
	char value = '%';

	s = &value;
	write(1, s, 1);
	return (1);
}
