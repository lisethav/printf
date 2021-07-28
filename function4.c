#include "holberton.h"
/**
 * pr_i - Signed integer
 *
 * @arg: arguments
 * Return: 0
 */
int pr_i(va_list arg) /*if (*p == 'i' */
{
	int i;
	char buffer[1024];

	i = va_arg(arg, int);
	_itoa(i, buffer, 10);              /*here 10 means decimal*/
	write(1, buffer, strlen(buffer)); /*strlen: long of buffer*/
	return (0);
}
