#include "holberton.h"
/**
 * pr_char - Type char
 *
 * @arg: arguments
 * Return: 0
*/
int pr_char(va_list arg) /* if (*p == 'c')*/
{
	char *s;
	char value;

	value = va_arg(arg, int); /*extracts int arg & stores as char type*/ 
	s = &value; 
	write(1, s, 1); 
	return (0);
}
/**
 * pr_string - string of chars
 *
 * @arg: arguments
 * Return: 0
*/
int pr_string(va_list arg) /* if (*p == 's')*/
{
	char *s;

	s = va_arg(arg, char *);
	write(1, s, strlen(s));
	return (0);
}
/**
 * pr_perc - Type % specifier function
 *
 * @arg: argument
 * Return: 1
 */
int pr_perc(va_list __attribute__((unused))arg) /* if (*p == '%') */
{
	char *s;
	char value = '%';

	s = &value;
	write(1, s, 1);
	return (1);
}
