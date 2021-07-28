#include "holberton.h"
/**
 * pr_di - Signed decimal integer
 *
 * @arg: arguments
 * Return: 0.
 */
int pr_di(va_list arg) /*if (*p == 'd' || *p == 'i' */
{
	int i;
	char buffer[1024];

	i = va_arg(arg, int);
	if (arg == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (i != 0)
	{
		_itoa(i, buffer, 10); /*here 10 means decimal*/
		write(1, buffer, _strlen(buffer)); /*strlen: long of buffer*/
	}
	else
		write(1, "0", 1 );
	return (0);
}
/**
 * pr_o - Signed octal
 *
 * @arg: arguments
 * Return: 0.
 */
int pr_o(va_list arg) /*if (*p == 'o')*/
{
	int i;
	char *s;
	char buffer[1024];

	i = va_arg(arg, int);
	if (arg == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	s = _itoa(i, buffer, 8); /*converts integer 10 to octal*/
	write(1, s, _strlen(s));
	return (0);
}
